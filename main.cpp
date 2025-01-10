#include <iostream>
#include <limits>
#include <random>
#include <concepts>

// implemented by Linear congruential generator
class RandomEngine {
public:
  using result_type = unsigned int;

private:
  // params from cc65 compiler
  unsigned int a = 16'843'009;
  unsigned int x;
  unsigned int c = 826'366'247;
  // int m;
public:
  RandomEngine(unsigned int seed = 0) : x(seed) {}
  result_type operator()() {
    x = a * x + c;
    return x;
  }
  static constexpr result_type min() { return 0; }
  static constexpr result_type max() {
    return std::numeric_limits<unsigned int>::max();
  }
};

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
