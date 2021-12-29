#include <iostream>
#include <fstream>
#include <vector>
#include <string>

std::vector<std::string> split_any(const std::string &s, const std::string &charlist, bool keep_empty_strings) {
  std::vector<std::string> ret;
  if (s.empty()) {
    return ret;
  }
  if (charlist.empty()) {
    ret.push_back(s);
    return ret;
  }

  const std::size_t s_len = s.length();
  std::size_t l = 0;
  std::size_t r = 0;
  for (; ; ) {
    r = s.find_first_of(charlist, l);
    if (r != std::string::npos) {
      if (l != r || keep_empty_strings) {
        ret.push_back(s.substr(l, r-l));
      }
      l = r + 1;
    } else {
      if (l < s_len || keep_empty_strings) {
        ret.push_back(s.substr(l, r-l));
      }
      break;
    }
  }
  return ret;
}

std::vector<int> TranNumber(std::ofstream file1) {

}



int main() {
  std::ofstream file1;
  file1.open("/Users/fangruiqian/Downloads/huige/ali.wh.percent", std::ios::out | std::ios::trunc );
  std::ofstream file2;
  file2.open("/Users/fangruiqian/Downloads/huige/ali.wh.percent", std::ios::out | std::ios::trunc );



  file1.close();
  file2.close();
  std::cout << "Hello, World!" << std::endl;
  return 0;
}
