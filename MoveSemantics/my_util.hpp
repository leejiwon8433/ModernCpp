#pragma once

template <typename T>
void my_swap(T& a, T& b) {
  T tmp(a);
  a = b;
  b = tmp;
}