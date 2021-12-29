#include<iostream>
#include<vector>

void test(std::vector<int> &arr) {
    bool flag = true;
    int indexend=arr.size() - 1,index = -1;
    while(flag) {
        flag = false;
        for(int i=0;i<indexend;i++) {
            if(arr[i] == 0) {
                std::swap(arr[i], arr[i+1]);
                flag = true;
                index = i;
            }
        }
        indexend = index;
    }

}

int main() {
    std::vector<int> t = {0,20,1,4,0,1,0};
    test(t);

    for(int a : t) 
        std::cout << a << std::endl;

    return 0;
}
