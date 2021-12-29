#include<iostream>
#include<vector>
// 纯交换
void bubble_sort(std::vector<int> &arr) {
    int i=0;
    for(;i<arr.size();i++) {
        for(int j=0;j<arr.size()-1;j++)
            if(arr[j] > arr[j+1])
                std::swap(arr[j],arr[j+1]);
    }
}
// 记录是否交换
void bubble_sort1(std::vector<int> &arr) {
    //int i=0;
    //for(;i<arr.size();i++) {
    //    bool flag = false;
    //    for(int j=0;j<arr.size()-1;j++)
    //        if(arr[j] > arr[j+1]) {
    //            std::swap(arr[j],arr[j+1]);
    //            flag = true;
    //        }
    //    if (!flag) {
    //        return;
    //    }
    //}
    bool flag = true;
    while(flag) {
        flag = false;
        for(int i=0;i<arr.size()-1;i++) {
            if(arr[i] > arr[i+1]) {
                std::swap(arr[i],arr[i+1]);
                flag = true;
            }
        }
    }

}
// 记录最后一次交换的位置，下次遍历到该位置就停止
void bubble_sort2(std::vector<int> &arr) {
    bool flag = true;
    int indexend = arr.size()-1,index = -1;

    while(flag) {
        flag = false;
        for(int i=0;i<indexend;i++) {
            if(arr[i] > arr[i+1]) {
                std::swap(arr[i],arr[i+1]);
                flag = true;
                index = i;
            }
        }
        indexend = index;
    }

}
int main() {
    std::vector<int> temp = {4,2,1,7,3};
    bubble_sort2(temp);    
    for(int i=0;i<temp.size();i++)
        std::cout << temp[i] << std::endl;
    return 0;
}
