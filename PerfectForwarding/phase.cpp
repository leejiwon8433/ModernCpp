// Phase 1
/*
template <typename T>
void wrapper(T u) {
  g(u);
}
*/

// Phase 2
/*
template <typename T>
void wrapper(T& u) {
  g(u);
}
*/

// Phase 3 : const 로 추론
/*
template <typename T>
void wrapper(T& u) {
  g(u);
}

template <typename T>
void wrapper(const T& u) {
  g(u);
}
*/

// Phase 4 : 보편적 레퍼런스 (Universal reference)
// 템플릿 인자 T 에 대해서, 우측값 레퍼런스를 받는 형태.
/*
template <typename T>
void wrapper(T&& u) {
  g(std::forward<T>(u));
}

// 우측값만 받는 레퍼런스와 다르다.
// "우측값만을" 인자로 받을 수 있다.
void show_value(int&& t) { std::cout << "우측값 : " << t << std::endl; }

int main() {
  show_value(5);  // 우측값 ok!

  int x = 3;
  show_value(x);  // 애러
}
*/