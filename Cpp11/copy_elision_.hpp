#pragma once
#include <iostream>


class CopyElisonObj
{
public:
	CopyElisonObj(int data) : data_(data)
	{
		std::cout << "�Ϲ� ������ ȣ��" << std::endl;
	}

	CopyElisonObj(const CopyElisonObj& tmp) : data_(tmp.data_)
	{
		std::cout << "���� ������ ȣ��" << std::endl;
	}

private:
	int data_;
};