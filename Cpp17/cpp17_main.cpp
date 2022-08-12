#include <iostream>
#include <map>
#include <vector>
#include "optional_.hpp"
#include "structured_bindings_.hpp"
#include "varient_.hpp"


int main()
{
#pragma region std::optional
	std::cout << '\n' << "========== std::optional ==========" << '\n';

	// value
	std::map<int, std::string> data = { {1, "hi"}, {2, "hello"}, {3, "hiroo"} };
	auto opt = GetValueFromMap(data, 2);
	std::cout << "\"opt\" has_value?:" << std::boolalpha << opt.has_value() << " value:" << opt.value() << '\n';
	auto opt2 = GetValueFromMap(data, 4);
	std::cout << "\"opt2\" has_value?:" << std::boolalpha << opt2.has_value() << std::endl; // opt2.value() : error

	// reference
	OptionalA optA;
	optA.data = 5;

	std::optional<std::reference_wrapper<OptionalA>> maybe_a = std::ref(optA);
	maybe_a->get().data = 3;	// get reference object
								// == maybe_a.value().get().data = 3;

	std::cout << "optA.data : " << optA.data << std::endl;

#pragma endregion

#pragma region std::variant
	std::cout << '\n' << "========== std::variant ==========" << '\n';

	// get one of type
	auto v = GetDoubleOrString(true);
	std::cout << v.index() << '\n';
	std::cout << std::get<double>(v) << '\n';

	// get one of class
	auto v2 = GetAorB(true);
	std::cout << v2.index() << '\n';
	std::get<VariantA>(v2).SayName();

	// get nullable object;
	auto v3 = GetDoubleOrMonostate(true);
	std::cout << v3.index() << std::endl;;
#pragma endregion

#pragma region Structured Bindings
	std::cout << '\n' << "========== structured bindings ==========" << '\n';

	// with tuple
	auto [age, name, is_male] = GetStudent(0);
	std::cout << "age: " << age << '\n';
	std::cout << "name: " << name << '\n';
	std::cout << "is_male: " << std::boolalpha << is_male << '\n';

	// with data structure
	Position position;
	position.x = 0.0;
	position.y = 1.0;
	position.z = 2.0;

	auto [x, y, z] = position;
	std::cout << "x:" << x << " y:" << y << " z:" << z << '\n';

	// with std::pair
	std::map<int, std::string> m = { {3, "hi"}, {5, "hello"} };
	for (const auto& [key, val] : m)
	{
		std::cout << "key:" << key << " value:" << val << std::endl;
	}
#pragma endregion

}

