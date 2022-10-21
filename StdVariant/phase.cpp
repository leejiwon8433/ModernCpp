// Phase 1 : get one of type
/*
std::variant<double, std::string> GetDoubleOrString(bool getDouble) {
  if (getDouble) {
    return 3.14;
  }

  return "I am variant";
}

auto v = GetDoubleOrString(true);
std::cout << v.index() << '\n';
std::cout << std::get<double>(v) << '\n';
*/


// Phase 2 : get one of class
/*
class A {
 public:
  void SayName() { std::cout << "I am A" << '\n'; }
};

class B {
 public:
  void SayName() { std::cout << "I am B" << '\n'; }
};

std::variant<A, B> GetAorB(bool getA) {
  if (getA) {
    return A();
  }

  return B();
}

auto v2 = GetAorB(true);
std::cout << v2.index() << '\n';
std::get<A>(v2).SayName();
*/


// Phase 3 : get nullable object;
/*
std::variant<std::monostate, double> GetDoubleOrMonostate(bool getMonostate) {
  if (getMonostate) {
    std::variant<std::monostate, double> v;
    return v;
  }

  return 3.14;
}

auto v3 = GetDoubleOrMonostate(true);
std::cout << v3.index() << std::endl;
*/