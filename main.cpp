#include <iostream>
#include <random>

#include "random_engine.h"

int main() {
  std::uniform_int_distribution<int> d(1, 6);
  RandomEngine e;
  random_engine_requires(e);

  for (auto i = 0; i != 10; ++i) {
    std::cout << d(e) << " ";
  }
  std::cout << std::endl;
}
