#pragma once
#include <iostream>


template <typename T>
void wrapper(T&& u) {
	//std::cout << "T& 로 추론됨" << std::endl;
	g(u);
}

class A {};

void g(A& a) { std::cout << "좌측값 레퍼런스 호출" << std::endl; }
void g(const A& a) { std::cout << "좌측값 상수 레퍼런스 호출" << std::endl; }
void g(A&& a) { std::cout << "우측값 레퍼런스 호출" << std::endl; }