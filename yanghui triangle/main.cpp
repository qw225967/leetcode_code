#include <iostream>
#include <vector>

class test {
public:
  std::vector<std::vector<int>> getvec(int nums) {
    std::vector<std::vector<int>> result = {{1}};
    // 只有一行则直接返回 第一个元素
    if (nums <= 1)
      return result;
    // 迭代从2开始（2为行数，不是下角标，迭代时进行-1换算）
    for (int i=2;i<nums+1;i++) {
      std::vector<int> temp;
      // 设置容量
      temp.resize(i);
      // 数组的第一个和最后一个都为1
      temp[0] = 1;
      for (int j=1;j<i-1;j++) {
        // i为行数，-2为：-1换算成下角标，再-1换算前一行。
        temp[j] = result[i-2][j-1] + result[i-2][j];
        std::cout << temp[j] << std::endl;
      }
      temp[i-1] = 1;
      result.push_back(temp);
    }
    return result;
  }
};


int main() {
  test t;
  t.getvec(5);

  std::cout << "Hello, World!" << std::endl;
  return 0;
}
