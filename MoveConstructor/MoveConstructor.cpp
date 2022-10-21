#include <iostream>
#include <vector>

#include "mystring.hpp"


int main()
{
  MyString s("abc");

  std::vector<MyString> vec;
  vec.resize(0);

  std::cout << "첫 번째 추가 ---" << std::endl;
  vec.push_back(s);

  std::cout << "두 번째 추가 ---" << std::endl;
  vec.push_back(s);

  std::cout << "세 번째 추가 ---" << std::endl;
  vec.push_back(s);
}