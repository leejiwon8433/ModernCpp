/*
void Phase1() {
  MyString str1("abc");
  MyString str2("def");
  std::cout << "Swap 전 -----" << std::endl;
  std::cout << "str1 : ";
  str1.println();
  std::cout << "str2 : ";
  str2.println();

  std::cout << "Swap 후 -----" << std::endl;
  my_swap(str1, str2);
  std::cout << "str1 : ";
  str1.println();
  std::cout << "str2 : ";
  str2.println();
}
*/

/* Phase 2 : Quiz
class A {
 public:
  A() { std::cout << "ctor\n"; }
  A(const A& a) { std::cout << "copy ctor\n"; }
  A(A&& a) { std::cout << "move ctor\n"; }
};

class B {
 public:
  A a_;
};

////////////////////////////

class A {
 public:
  A() { std::cout << "ctor\n"; }
  A(const A& a) { std::cout << "copy ctor\n"; }
  A(A&& a) { std::cout << "move ctor\n"; }
};

class B {
 public:
  B(A&& a) : a_(std::move(a)) {}

  A a_;
};

int main() {
  A a;
  std::cout << "create B-- \n";
  B b(std::move(a));
}
*/

/*
void Phase2() {
  MyString str1("abc");

  std::cout << "----- 복사 -----" << std::endl;
  MyString str2 = str1;

  std::cout << "----- 이동 -----" << std::endl;
  MyString str3 = std::move(str1);
}
*/