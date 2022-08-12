#pragma once
#include <iostream>


class CopyElisonObj
{
public:
	CopyElisonObj(int data) : data_(data)
	{
		std::cout << "일반 생성자 호출" << std::endl;
	}

	CopyElisonObj(const CopyElisonObj& tmp) : data_(tmp.data_)
	{
		std::cout << "복사 생성자 호출" << std::endl;
	}

private:
	int data_;
};