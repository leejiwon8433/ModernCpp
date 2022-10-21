#pragma once
#include <iostream>

// CRT
#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

#include <cstdlib>
#define new new (_NORMAL_BLOCK, __FILE__, __LINE__)
#endif

class A {
  int* data;

 public:
  A() {
    std::cout << "자원을 획득함!" << std::endl;
    data = new int[100];
  }

  A(int num) {
    std::cout << "자원을 획득함!" << std::endl;
    data = new int[100];
    data[0] = num;
  }

  ~A() {
    std::cout << "자원을 해제함!" << std::endl;
    delete[] data;
  }

  void some() { 
    std::cout << "일반 포인터와 동일하게 사용가능!" << std::endl; 
  }

  void do_something(int num) {
    std::cout << "무언가를 한다!" << std::endl;
    data[0] = num;
  }
};



class NumberPair {
  int a, b;

 public:
  NumberPair(int a, int b) : a(a), b(b) {
    std::cout << "생성자 호출!" << std::endl;
  }
  ~NumberPair() { 
    std::cout << "소멸자 호출!" << std::endl; 
  }

  void print() { std::cout << "a : " << a << ", b : " << b << std::endl; }
};