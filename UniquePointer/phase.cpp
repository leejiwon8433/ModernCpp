// Unique Pointer

// Phase 1 : 함수 인자로 넘기기.
/*
void do_something(A* ptr) {
  ptr->do_something(3);
}

std::unique_ptr<A> ps(new A(1));
  do_something(ps.get());
*/

// Phase 2 : make_*() 함수 사용하기.
/*
std::cout << '\n' << "----------" << '\n';
auto ptr = std::make_unique<NumberPair>(3, 5);
ptr->print();
*/

// Phase 3 : 컨테이너 사용하기.
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

// 벡터의 첫번째 원소를 소멸 시킨다.
std::cout << "erase\tcnt: " << vec[0].use_count() << std::endl;
vec.erase(vec.begin());

// 그 다음 원소를 소멸 시킨다.
std::cout << "erase\tcnt: " << vec[0].use_count() << std::endl;
vec.erase(vec.begin());

// 마지막 원소 소멸
std::cout << "erase\tcnt: " << vec[0].use_count() << std::endl;
vec.erase(vec.begin());
*/