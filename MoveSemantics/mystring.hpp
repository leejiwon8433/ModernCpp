#include <iostream>

class MyString {
 public:
  MyString();
  MyString(const char* str);
  MyString(const MyString& str);
  MyString(MyString&& str) noexcept;
  MyString& operator=(const MyString& s);
  //MyString& operator=(MyString&& s) noexcept;
  ~MyString();

  int length() const;
  void println();

 private:
  char* string_content_;  // ���ڿ� �����͸� ����Ű�� ������
  int string_length_;     // ���ڿ� ����
  int memory_capacity_;   // ���� �Ҵ�� �뷮
};

MyString::MyString() {
  std::cout << "������ ȣ�� ! " << std::endl;
  string_length_ = 0;
  memory_capacity_ = 0;
  string_content_ = nullptr;
}

MyString::MyString(const char* str) {
  std::cout << "������ ȣ�� ! " << std::endl;
  string_length_ = strlen(str);
  memory_capacity_ = string_length_;
  string_content_ = new char[string_length_];

  for (int i = 0; i != string_length_; i++) 
    string_content_[i] = str[i];
}

MyString::MyString(const MyString& str) {
  std::cout << "���� ������ ȣ�� ! " << std::endl;
  string_length_ = str.string_length_;
  memory_capacity_ = string_length_;
  string_content_ = new char[string_length_];

  for (int i = 0; i != string_length_; i++)
    string_content_[i] = str.string_content_[i];
}

MyString::MyString(MyString&& str) noexcept {
  std::cout << "�̵� ������ ȣ�� !" << std::endl;
  string_length_ = str.string_length_;
  string_content_ = str.string_content_;
  memory_capacity_ = str.memory_capacity_;

  // �ӽ� ��ü �Ҹ� �ÿ� �޸𸮸� �������� ���ϰ� �Ѵ�.
  str.string_content_ = nullptr;
  str.string_length_ = 0;
  str.memory_capacity_ = 0;
}

MyString::~MyString() {
  if (string_content_) 
    delete[] string_content_;
}

MyString& MyString::operator=(const MyString& s) {
  std::cout << "����!" << std::endl;
  if (s.string_length_ > memory_capacity_) {
    delete[] string_content_;
    string_content_ = new char[s.string_length_];
    memory_capacity_ = s.string_length_;
  }
  string_length_ = s.string_length_;
  for (int i = 0; i != string_length_; i++) {
    string_content_[i] = s.string_content_[i];
  }

  return *this;
}

//MyString& MyString::operator=(MyString&& s) noexcept {
//  std::cout << "�̵�!" << std::endl;
//  string_content_ = s.string_content_;
//  memory_capacity_ = s.memory_capacity_;
//  string_length_ = s.string_length_;
//
//  s.string_content_ = nullptr;
//  s.memory_capacity_ = 0;
//  s.string_length_ = 0;
//  return *this;
//}

int MyString::length() const { return string_length_; }

void MyString::println() {
  for (int i = 0; i != string_length_; i++) 
    std::cout << string_content_[i];
  std::cout << std::endl;
}