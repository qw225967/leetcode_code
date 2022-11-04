#include <iostream>
#include <string>
#include <unordered_map>

int main() {
  std::string str("asdfhwefuiasdfffdasbnfdff");
  std::unordered_map<char, int> tmp_map;
  std::pair<char, int> max;


  for (char s : str) {
    if (++tmp_map[s] > max.second) {
      max.second = tmp_map[s];
      max.first = s;
    }
  }


  std::cout << max.first << ", " << max.second << std::endl;

  return 0;
}
