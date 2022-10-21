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

// Phase 3 : const �� �߷�
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

// Phase 4 : ������ ���۷��� (Universal reference)
// ���ø� ���� T �� ���ؼ�, ������ ���۷����� �޴� ����.
/*
template <typename T>
void wrapper(T&& u) {
  g(std::forward<T>(u));
}

// �������� �޴� ���۷����� �ٸ���.
// "����������" ���ڷ� ���� �� �ִ�.
void show_value(int&& t) { std::cout << "������ : " << t << std::endl; }

int main() {
  show_value(5);  // ������ ok!

  int x = 3;
  show_value(x);  // �ַ�
}
*/