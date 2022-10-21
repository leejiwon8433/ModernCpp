// Unique Pointer

// Phase 1 : �Լ� ���ڷ� �ѱ��.
/*
void do_something(A* ptr) {
  ptr->do_something(3);
}

std::unique_ptr<A> ps(new A(1));
  do_something(ps.get());
*/

// Phase 2 : make_*() �Լ� ����ϱ�.
/*
std::cout << '\n' << "----------" << '\n';
auto ptr = std::make_unique<NumberPair>(3, 5);
ptr->print();
*/

// Phase 3 : �����̳� ����ϱ�.
/*
std::cout << '\n' << "----------" << '\n';
  std::vector<std::unique_ptr<A>> vec;
  std::unique_ptr<A> pa = std::make_unique<A>(1);

  vec.push_back(std::move(pa));
*/


// Shared Pointer
/*
std::vector<std::shared_ptr<A>> vec;

vec.push_back(std::make_shared<A>());
vec.push_back(vec[0]);
vec.push_back(vec[1]);

// ������ ù��° ���Ҹ� �Ҹ� ��Ų��.
std::cout << "erase\tcnt: " << vec[0].use_count() << std::endl;
vec.erase(vec.begin());

// �� ���� ���Ҹ� �Ҹ� ��Ų��.
std::cout << "erase\tcnt: " << vec[0].use_count() << std::endl;
vec.erase(vec.begin());

// ������ ���� �Ҹ�
std::cout << "erase\tcnt: " << vec[0].use_count() << std::endl;
vec.erase(vec.begin());
*/