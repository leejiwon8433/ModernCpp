#include <iostream>


class A {
 public:
  A(int data) : data_(data) { std::cout << "일반 생성자 호출" << std::endl; }

  A(const A& tmp) : data_(tmp.data_) {
    std::cout << "복사 생성자 호출" << std::endl;
  }

 private:
  int data_;
};


int main()
{
  A a1(1);
  A a2(a1);
  A a3(A(2));
}