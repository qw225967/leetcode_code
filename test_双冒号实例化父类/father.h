/**
 **   Time     : 2021-08-04 15:57
 **   Author   : fangruiqian
 **   Poject   : test_
 **   File     : father 
 **   Software : Clion
 **   Email    : fangruiqian@inke.cn
 **/

#include <iostream>

#ifndef TEST__FATHER_H
#define TEST__FATHER_H

class father {
public:
  father(int a) {
    std::cout << " father other:" << a << std::endl;
  }
};

namespace test2 {
  class father {
  public:
    father(int a) {
      std::cout << " father test2:" << a << std::endl;
    }
  };
}


#endif //TEST__FATHER_H
