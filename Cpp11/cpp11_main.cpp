#include <iostream>
#include <vector>
#include "copy_elision_.hpp"
#include "mystring.hpp"
#include "my_util.hpp"
#include "perfect_forwarding.hpp"


int main()
{
#pragma region Copy Elision
	/*
	std::cout << '\n' << "========== Copy Elision ==========" << '\n';

	CopyElisonObj copyObj1(1);
	CopyElisonObj copyObj2(copyObj1);
	CopyElisonObj copyObj3(CopyElisonObj(2));	// 복사 생성자 호출 X -> 컴파일러에서 복사 생략

	MyString str1("abc");
	MyString str2("def");
	std::cout << "--------------" << std::endl;
	MyString str3 = str1 + str2 + str1;
	str3.println();
	std::cout << "--------------" << std::endl;
	MyString str4(std::move(str1));
	str1.println();
	*/
#pragma endregion

#pragma region Move Constructor
	/*
	std::cout << '\n' << "========== Move Constructor ==========" << '\n';

	MyString s("abc");
	std::vector<MyString> vec;
	vec.resize(0);

	std::cout << "첫 번째 추가 ---" << std::endl;
	vec.push_back(s);
	std::cout << "두 번째 추가 ---" << std::endl;
	vec.push_back(s);
	std::cout << "세 번째 추가 ---" << std::endl;
	vec.push_back(s);
	*/
#pragma endregion

#pragma region Move Semantics
	/*std::cout << '\n' << "========== Move Semantics ==========" << '\n';

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

	std::cout << "----- 복사 -----" << std::endl;
	MyString str3 = str1;

	std::cout << "----- 이동 -----" << std::endl;
	MyString str3 = std::move(str1);*/
#pragma endregion

#pragma region Perfect Forwarding
	std::cout << '\n' << "========== Perfect Forwarding ==========" << '\n';

	A a;
	const A ca;

	std::cout << "원본 --------" << std::endl;
	g(a);
	g(ca);
	g(A());

	std::cout << "Wrapper -----" << std::endl;
	wrapper(a);
	wrapper(ca);
	wrapper(A());
#pragma endregion

}