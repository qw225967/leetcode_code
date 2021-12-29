#include <iostream>
#include <vector>
int test(std::vector<int> &nums) {
  int max = nums[0];
  int result = nums[0];
  for(int i=1;i<nums.size();i++) {
    max = std::max(max+nums[i],nums[i]);
    result = std::max(result,max);
  }
  return result;
}

int test2(std::vector<int> &nums, int k) {
  if (nums.size() == 1) return nums[0];
  for(int i=0;i<k;i++) {
    int max_index = i;
    int max = nums[i];
    for(int s=i+1,e=(int)nums.size()-1;s<e;s++,e--){
      if(max < nums[s]) {
        max = nums[s];
        max_index = s;
      }
      if(max < nums[e]) {
        max = nums[e];
        max_index = e;
      }
    }
    if (nums[max_index] > nums[i]) {
      nums[i] = nums[i]^nums[max_index];
      nums[max_index] = nums[i]^nums[max_index];
      nums[i] = nums[i]^nums[max_index];
    }
  }
  return nums[k-1];
}

int main() {
//  std::vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
  std::vector<int> arr = {-1,2,0};
  test2(arr,2);

  std::cout << "Hello, World!" << std::endl;
  return 0;
}
