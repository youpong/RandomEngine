#include <iostream>
#include <limits>
#include <random>

// Linear congruential generator
class RandomEngine {
public:
    using result_type = unsigned int;

private:
    unsigned int a = 3;
    unsigned int x;
    unsigned int c = 5;
    // int m;
public:
    RandomEngine(unsigned int seed = 0) : x(seed) {}
    result_type operator()()
    {
        x = a * x + c;
        return x;
    }
    static constexpr result_type min()
    {
        return 0;
    }
    static constexpr result_type max()
    {
        return std::numeric_limits<unsigned int>::max();
    }
};

int main()
{
    std::uniform_int_distribution<int> d(1, 6);
    RandomEngine e;

    for (auto i = 0; i != 10; ++i)
    {
        std::cout << d(e) << " ";
    }
}
