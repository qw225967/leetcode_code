#include <iostream>
#include "father.h"

namespace test {
  class son : public ::father {
  public:
    class internal {
    public:
      void showinfo() {
        std::cout << " internal show:" << std::endl;
      }
    };

  public:
    son(int b);
  };
  class father : public son::internal {
  public:
    father(int a) : s(a){
      std::cout <<  "father internal:" << a <<  std::endl;
    }
    son s;
  };

  son::son(int b) : ::father(b) {
    std::cout << "son:" << b << std::endl;
  }
}

int main() {
  std::cout << "Hello, World!" << std::endl;

  test::father f(1);

  f.showinfo();
  return 0;
}
