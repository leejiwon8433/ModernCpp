#pragma once
#include <iostream>
#include <string>
#include <variant>

class VariantA
{
public:
	void SayName() { std::cout << "I am A" << '\n'; }
};

class VariantB
{
public:
	void SayName() { std::cout << "I am B" << '\n'; }
};

std::variant<double, std::string> GetDoubleOrString(bool getDouble)
{
	if (getDouble)
	{
		return 3.14;
	}

	return "I am variant";
}

std::variant<VariantA, VariantB> GetAorB(bool getA)
{
	if (getA)
	{
		return VariantA();
	}

	return VariantB();
}

std::variant<std::monostate, double> GetDoubleOrMonostate(bool getMonostate)
{
	if (getMonostate)
	{
		std::variant<std::monostate, double> v;
		return v;
	}

	return 3.14;
}