#include <iostream>
#include <list>

int main() {
//  std::list<int> l;
//  l.push_back(1);
//  l.push_back(2);
//  l.push_back(3);
//  l.push_back(4);

//  std::list<int> l1;
//  std::list<int> l2;
//  l1.push_back(1);
//  l1.push_back(2);
//  l2.push_back(3);
//  l2.push_back(4);
//
//
//  l1.merge(l2);
//  for(auto iter = l1.begin();iter!=l1.end();iter++) {
//    std::cout << *iter << " ";
//  }
//  std::cout << std::endl;

  std::list<int> l;
  l.push_back(1);
  l.push_back(3);
  l.push_back(2);
  l.push_back(4);
  l.sort();
  for(auto iter = l.begin();iter!=l.end();iter++) {
    std::cout << *iter << " ";
  }
  std::cout << std::endl;


//  auto iter = l.begin();
//  for(int i=0; i<=l.size()*2;i++) {
//    std::cout << *iter << " ";
//    iter++;
//  }
//  std::cout << std::endl;
//  auto iter2 = l.end();
//  std::cout << *iter2 << std::endl;
//  l.push_back(5);
//  auto iter3 = l.end();
//  std::cout << *iter3 << std::endl;

//  for(auto iter = l.begin();iter!=l.end();iter++) {
//    std::cout << *iter << " ";
//  }
//  std::cout << std::endl;
//  l.reverse();
//  for(auto iter = l.begin();iter!=l.end();iter++) {
//    std::cout << *iter << " ";
//  }
//  std::cout << std::endl;


  std::cout << "Hello, World!" << std::endl;
  return 0;
}
