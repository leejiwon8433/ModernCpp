#include <iostream>
#include <map>
#include <optional>
#include <string>

#include "optional_.hpp"


class A {
 public:
  int data;
};

std::optional<std::string> GetValueFromMap(const std::map<int, std::string>& m, int key) {
  if (auto itr = m.find(key); itr != m.end())
    return itr->second;

  return std::nullopt;
}


int main() {
  std::map<int, std::string> data = {
    {1, "hi"}, 
    {2, "hello"}, 
    {3, "hiroo"}
  };
}