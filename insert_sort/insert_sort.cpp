//#include<iostream>
//#include<vector>
//
//void insert_sort(std::vector<int> &nums) {
//    for(int i=0; i<nums.size();i++)
//        for(int j=i;j>=1 && nums[j] > nums[j-1];j--)
//            std::swap(nums[j], nums[j-1]);
//}
//void insert_sort2(std::vector<int> &nums) {
//    for(int i=1; i<nums.size();i++) {
//        int temp = nums[i];
//        int j=i-1;
//        for(;j>=0 && nums[j] > temp;j--)
//            nums[j+1] = nums[j];
//        nums[j+1] = temp;
//    }
//}
//
//int main() {
//    std::vector<int> nums= {5,2,3,1};
//    insert_sort2(nums);
//
//    for(int i=0; i< nums.size(); i++) {
//        std::cout << nums[i] << std::endl;
//    }
//
//    return 0;
//}
