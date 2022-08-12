#pragma once
#include <iostream>
#include <string>
#include <tuple>

std::tuple<int, std::string, bool> GetStudent(int id)
{
	if (id == 0)
	{
		return std::make_tuple(28, "lee", false);
	}
	else
	{
		return std::make_tuple(30, "kim", true);
	}
}

struct Position
{
	double x;
	double y;
	double z;
};