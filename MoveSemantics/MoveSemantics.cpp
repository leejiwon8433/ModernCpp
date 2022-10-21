#include <iostream>

#include "mystring.hpp"
#include "my_util.hpp"


int main() {
  MyString str1("abc");
  MyString str2("def");
  std::cout << "Swap 전 -----" << std::endl;
  std::cout << "str1 : ";
  str1.println();
  std::cout << "str2 : ";
  str2.println();

  std::cout << "Swap 후 -----" << std::endl;
  my_swap(str1, str2);
  std::cout << "str1 : ";
  str1.println();
  std::cout << "str2 : ";
  str2.println();
}