#include <iostream>
#include <string>
#include <variant>

std::variant<double, std::string> GetDoubleOrString(bool getDouble) {
  if (getDouble) {
    return 3.14;
  }

  return "I am variant";
}

int main() {

}