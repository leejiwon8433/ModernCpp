// Phase 1 : with tuple
/*
std::tuple<int, std::string, bool> GetStudent(int id) {
  if (id == 0)
    return std::make_tuple(28, "lee", false);
  else
    return std::make_tuple(30, "kim", true);
}

auto [age, name, is_male] = GetStudent(0);
std::cout << "age: " << age << '\n';
std::cout << "name: " << name << '\n';
std::cout << "is_male: " << std::boolalpha << is_male << '\n';
*/

// Phase 2 : with data structure
/*
struct Position {
  double x;
  double y;
  double z;
};

Position position;
position.x = 0.0;
position.y = 1.0;
position.z = 2.0;

auto [x, y, z] = position;
std::cout << "x:" << x << " y:" << y << " z:" << z << '\n';
*/


// Phase 3 : with std::pair
/*
std::map<int, std::string> m = {
    {3, "hi"},
    {5, "hello"}
  };

  for (const auto& [key, val] : m)
    std::cout << "key:" << key << " value:" << val << std::endl;
*/