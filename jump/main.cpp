#include <iostream>
#include <vector>

class Solution1 {
  public:
    int jump(std::vector<int> &nums) {
      int result = 0, max = 0;
      for (int i = 0; i < nums.size();) {
        result++;
        for (int j = i; j <= i + nums[i]; j++)
          max = std::max(max, nums[j]);
        i += max;
      }
      return result;
    }
};

class Solution2 {
  public:
    int jump(std::vector<int> &nums) {
      int maxPos = 0, n = nums.size(), end = 0, step = 0;
      for (int i = 0; i < n - 1; ++i) {
        if (maxPos >= i) {
          maxPos = std::max(maxPos, i + nums[i]);
          if (i == end) {
            end = maxPos;
            ++step;
          }
        }
      }
      return step;
    }
};


int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}
