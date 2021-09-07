#include <iostream>
#include <vector>
class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
      std::vector<int> temp;
      bool flag = false;
      auto iter = digits.rbegin();
      for ( ;iter != digits.rend();iter++) {
        if (temp.empty()) {
          if (*iter == 9) {
            temp.push_back(0);
            flag = true;
          } else {
            temp.push_back(*iter+1);
            flag = false;
          }
          continue;
        } else {
          if (flag) {
            if (*iter == 9) {
              temp.push_back(0);
              flag = true;
            } else {
              temp.push_back(*iter+1);
              flag = false;
            }
            continue;
          }
        }
        temp.push_back(*iter);
      }
      std::vector<int> result;
      if (flag) {
        result.push_back(1);
      }
      auto riter = temp.rbegin();
      for (;riter != temp.rend(); riter++) {
        result.push_back(*riter);
      }

      return result;
    }
};
int main() {
  std::vector<int> test;
  test.push_back(1);
  test.push_back(2);
  test.push_back(3);

  Solution t;
  t.plusOne(test);

  std::cout << "Hello, World!" << std::endl;
  return 0;
}
