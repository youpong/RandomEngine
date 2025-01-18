#include <concepts>
#include <limits>

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

static_assert(std::uniform_random_bit_generator<RandomEngine>);
