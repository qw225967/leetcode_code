#include <iostream>
#include <vector>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int middle = nums.size()/2;
        int head = 0;
        int tail = nums.size()-1;

        // 循环至头尾相交
        while (head <= tail) {
            if (nums[middle] == target) {
                 return middle;
            } else if (nums[middle] < target && target < nums[tail]) {
                head = middle + 1;
            } else if (nums[middle] > target && target > nums[head]) {
                tail = middle - 1;
            } else {
                if (target < nums[head]) {
                    return head;
                } else if (target > nums[tail]) {
                    return tail+1;
                } else if (nums[head] == target) {
                  return head;
                } else if (nums[tail] == target) {
                  return tail;
                }
            }
            middle = (head + tail)/2;
        }
        return middle;
    }
};
int main() {
  std::vector<int> vc;
  vc.push_back(1);
  vc.push_back(3);
  vc.push_back(5);
//  vc.push_back(6);

  Solution s;
  s.searchInsert(vc,1);
  return 0;
}