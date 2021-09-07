#include <iostream>
#include <vector>

class Solution {
public:
  std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    std::sort(nums.begin(), nums.end());
    int i=0;
    for (;i<nums.size();i++) {
      if (i > 0 && nums[i] == nums[i-1]) continue;
      int a=i+1,b=nums.size()-1;
      while(a < b) {
        if ( nums[a]+nums[b]+nums[i] == 0 ) {
          std::vector<int> temp;
          temp.push_back(nums[i]);
          temp.push_back(nums[a]);
          temp.push_back(nums[b]);
          result.push_back(temp);
          while (a < b && nums[b] == nums[b-1]) b--;
          while (a < b && nums[a] == nums[a+1]) a++;
        } else if ( nums[a]+nums[b]+nums[i] > 0 ) {
          b--;
        } else{
          a++;
        }
      }
    }
    return result;
  }

  void SwapElement(int *a, int *b) {
    if (a == b) return;
    int temp = *a;
    *a = *b;
    *b = temp;
  }

  void quicksort(std::vector<int>& nums, int left, int right) {
    if (left >= right)
      return;
    int flag = nums[left];
    int i=left,j=right;
    while (i < j) {
      while (i < j && nums[j] >= flag)
        j--;
      SwapElement(&nums[i], &nums[j]);
      while (i < j && nums[i] < flag)
        i++;
      SwapElement(&nums[j], &nums[i]);
    }

    quicksort(nums,left,i-1);
    quicksort(nums,i+1,right);
  }
};



int main() {
  std::vector<int> vec_t = {0,0,0,0};
  Solution s;
  s.threeSum(vec_t);

  std::cout << "Hello, World!" << std::endl;
  return 0;
}
