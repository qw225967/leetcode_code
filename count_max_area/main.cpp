#include <iostream>
#include <vector>

class Solution {
  public:
    int maxArea(std::vector<int>& height) {
      int max = 0;
      for (int i=0; i<height.size()-1; i++) {
        for (int j=i+1; j<height.size(); j++) {
          int h = (height[i] > height[j] ? height[j] : height[i]);
          int w = j - i;
          max = (max > h*w ? max : h*w);
        }
      }
      return max;
    }
};

class Solution2 {
  public:
    int maxArea(std::vector<int>& height) {
      int i=0, j=height.size()-1,max=0;
      while(i<j) {
        int area = height[i] > height[j] ? height[j]*(j-i) : height[i]*(j-i);
        max = area > max ? area : max;
        if (height[i] > height[j]) j--;
        else i++;
      }
      return max;
    }
};

int main() {
  std::vector<int> vec = {1,8,6,2,5,4,8,3,7};
  Solution2 s;
  s.maxArea(vec);


  std::cout << "Hello, World!" << std::endl;
  return 0;
}
