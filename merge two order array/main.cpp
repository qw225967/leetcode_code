#include <iostream>
#include <vector>
class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
      int k = m + n - 1;
      int i=m-1;
      int j=n-1;
      while (i >= 0 && j >= 0 ) {
        if (nums1[i] >= nums2[j]) {
          nums1[k] = nums1[i];
          i--;
        } else if (nums1[i] < nums2[j]) {
          nums1[k] = nums1[j];
          j--;
        }
        k--;
      }
      while(k >= 0) {
        if (j>=0) {
          nums1[k] = nums2[j];
          j--;
        }
        if (i>=0) {
          nums1[k] = nums1[i];
          i--;
        }
        k--;
      }
    }
};

int main() {
  std::vector<int> test1;
  test1.push_back(1);
  test1.push_back(2);
  test1.push_back(3);
  test1.push_back(0);
  test1.push_back(0);
  test1.push_back(0);

  std::vector<int> test2;
  test2.push_back(2);
  test2.push_back(5);
  test2.push_back(6);

  Solution s;
  s.merge(test1,3,test2,3);


  std::cout << "Hello, World!" << std::endl;
  return 0;
}
