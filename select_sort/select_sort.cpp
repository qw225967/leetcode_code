#include<iostream>
#include<vector>

void select_sort(std::vector<int> &nums) {
    int minindex = 0;
    for(int i=0; i<nums.size()-1; i++) {
        minindex=i;
        for(int j=i+1; j<nums.size(); j++) {
            if(nums[minindex] < nums[j]) {
                minindex = j;
            }
        }
        std::swap(nums[i], nums[minindex]);
    }
}
void select_sort2(std::vector<int> &nums) {
    int minindex,maxindex;
    for(int i=0; i<nums.size()/2; i++) {
        minindex = i;
        maxindex = i; 
        for(int j=i+1; j<nums.size()-i; j++) {
            if(nums[minindex] > nums[j]) {
                minindex = j;
            }
            if(nums[maxindex] < nums[j]) {
                maxindex = j;
            }
        }
        if(maxindex == minindex) break;
        std::swap(nums[i], nums[minindex]);
        if(maxindex == i) maxindex = minindex;
        std::swap(nums[nums.size()-1-i], nums[maxindex]);
    }
}


int main() {
    std::vector<int> nums= {5,2,3,1};
    select_sort2(nums);
    
    for(int i=0; i< nums.size(); i++) {
        std::cout << nums[i] << std::endl;
    } 

    return 0;
}
