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
    std::cout << "�ڿ��� ȹ����!" << std::endl;
    data = new int[100];
  }

  A(int num) {
    std::cout << "�ڿ��� ȹ����!" << std::endl;
    data = new int[100];
    data[0] = num;
  }

  ~A() {
    std::cout << "�ڿ��� ������!" << std::endl;
    delete[] data;
  }

  void some() { 
    std::cout << "�Ϲ� �����Ϳ� �����ϰ� ��밡��!" << std::endl; 
  }

  void do_something(int num) {
    std::cout << "���𰡸� �Ѵ�!" << std::endl;
    data[0] = num;
  }
};



class NumberPair {
  int a, b;

 public:
  NumberPair(int a, int b) : a(a), b(b) {
    std::cout << "������ ȣ��!" << std::endl;
  }
  ~NumberPair() { 
    std::cout << "�Ҹ��� ȣ��!" << std::endl; 
  }

  void print() { std::cout << "a : " << a << ", b : " << b << std::endl; }
};