#pragma once
#include <iostream>


template <typename T>
void wrapper(T&& u) {
	//std::cout << "T& �� �߷е�" << std::endl;
	g(u);
}

class A {};

void g(A& a) { std::cout << "������ ���۷��� ȣ��" << std::endl; }
void g(const A& a) { std::cout << "������ ��� ���۷��� ȣ��" << std::endl; }
void g(A&& a) { std::cout << "������ ���۷��� ȣ��" << std::endl; }