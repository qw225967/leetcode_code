#include <iostream>
using namespace std;
//为了统一操作, 堆存储在 顺序数组中, 下标从 1 开始, 以大根堆为例
 
void adjust_heap(int* a, int father, int len)//判断是不是符合大根堆
{
    int left = 2 * father;
    int right = 2 * father + 1;
    int max = father;
    if( left <= len && a[left] > a[max])//left <= len 防止节点不存在
        max = left;
    if( right <= len && a[right] > a[max])//a[right] > a[max] 判断是不是根节点最大(因为你每个子树都要符合大根堆的性质啊)
        max = right;
    if(max != father)
    {
        swap( a[max], a[father]);//交换节点
        adjust_heap(a, max, len);//从当交换后前节点开始, 调整下面的堆
    }//这里的 max 是当前 father 的某一个儿子, 而不是 father 自身,　因为交换后 father 本来就是有序的.
}
 
void heap_sort(int* a, int len)
{
    for(int i = len / 2; i >= 1; --i) //1.创建堆make_heap, 从最后一个非叶子节点开始
        adjust_heap(a, i, len);
 
    for(int i = len; i >= 1; --i)//2. 堆排序, 此时 [1, len] 为一个堆
    {
        swap(a[1], a[i]);      //将　堆顶元素(数组首位)　与　堆末元素(数组末位) 互换.
        adjust_heap(a, 1, i - 1); // 此时堆末元素已经有序(存的是最大值), 
    }// 剩余堆的范围变成了 [1, len-1], 但由于上一步的交换可能破坏堆的性质, 故要进行调整
}
 
int main()
{
    int a[11] = {-999, 7, 3, 4, 5, 2, 0, -1, 10, 0, 9};
    int len = sizeof(a) / sizeof(int);
    //cout << len << endl;
 
    for(int i = 1; i < len; ++i)
        cout << a[i] << ' ';
    cout << endl;
 
    heap_sort(a, len);//len = 11, 但是约定 a[0] 不存值, 有意义的值从 a[1] 开始
 
    for(int i = 1; i <= len; ++i)
        cout << a[i] << ' ';
    cout << endl;
 
    return 0;
}
