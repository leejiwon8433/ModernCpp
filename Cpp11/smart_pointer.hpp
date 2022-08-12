#pragma once
#include <iostream>

// CRT
#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>
#define new new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
#endif


class Smart {
    int* data;

public:
    Smart() 
    {
        std::cout << "�ڿ��� ȹ����!" << std::endl;
        data = new int[100];
    }

    Smart(int num) 
    {
        std::cout << "�ڿ��� ȹ����!" << std::endl;
        data = new int[100];
        data[0] = num;
    }

    ~Smart() 
    {
        std::cout << "�ڿ��� ������!" << std::endl;
        delete[] data;
    }

    void some() { std::cout << "�Ϲ� �����Ϳ� �����ϰ� ��밡��!" << std::endl; }

    void do_something(int num)
    {
        std::cout << "���𰡸� �Ѵ�!" << std::endl;
        data[0] = num;
    }
};

void do_something(Smart* ptr) {
    ptr->do_something(3);
}


class Foo {
    int a, b;

public:
    Foo(int a, int b) : a(a), b(b) { std::cout << "������ ȣ��!" << std::endl; }
    ~Foo() { std::cout << "�Ҹ��� ȣ��!" << std::endl; }

    void print() { std::cout << "a : " << a << ", b : " << b << std::endl; }
};