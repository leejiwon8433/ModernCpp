#pragma once
#include <iostream>
#include <map>
#include <string>
#include <optional>

class A
{
public:
	int data;
};

std::optional<std::string> GetValueFromMap(const std::map<int, std::string>& m, int key)
{
	if (auto itr = m.find(key); itr != m.end())
	{
		return itr->second;
	}

	return std::nullopt;
}