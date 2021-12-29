#include<iostream>
#include<vector>

int binary_search(std::vector<int> &arr, int target) {
    if(arr.empty()) return -1;

    int binary_index = arr.size()/2;
    int end_index = arr.size()-1;
    int start_index = 0;
    while(start_index <= end_index) {
        if(arr[binary_index] > target) {
            end_index = binary_index - 1;
            binary_index = (start_index + end_index)/2;
        }
        else if(arr[binary_index] < target) {
            start_index = binary_index + 1;
            binary_index = (start_index + end_index)/2;
        }
        else
            return binary_index;
    }
    
   return -1; 
}


int main() {
    std::vector<int> arr = {1,2,3,4,5,6,7,8};
    
    std::cout << binary_search(arr,4) << std::endl;


    return 0;
}
