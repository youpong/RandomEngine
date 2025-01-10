#include <iostream>
// #include <limits>
#include <random>
#include <concepts>

#include "random_engine.h"

template <typename T>
concept Engine = requires(T t) {
  { t.min() } -> std::convertible_to<typename T::result_type>;
  { t.max() } -> std::convertible_to<typename T::result_type>;
  { t() } -> std::convertible_to<typename T::result_type>;
};

template <typename Engine>
auto random_engine_requires(Engine &e) {
  e.min();
  e.max();
  e();
}

int main() {
  std::uniform_int_distribution<int> d(1, 6);
  RandomEngine e;
  random_engine_requires(e);

  for (auto i = 0; i != 10; ++i) {
    std::cout << d(e) << " ";
  }
  std::cout << std::endl;
}
