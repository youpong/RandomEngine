# RandomEngine

Provides a practical demonstration of how to implement a custom random number
generator and use it in conjunction with the standard `std::uniform_int_distribution`.

## Requisite

written in C++20, you will need a recent version of a C++ compiler and C++ standard 
library. 

## Tested Environment

We are testing in the following environments:

* macOS 15.2
  * Xcode 16.2 (using the bundled Apple Clang 16.0.0)
* Ubuntu 24.04.1 LTS
  * GCC 13.3.0
  * Clang 18.1.3

## How to Build

```
$ make main
```

## How to Run

Displays the results of rolling the dice 10 times.

```
$ make run
```

## Setting Up a Docker Environment for Build/Run

This project supports building and testing within a Docker container. The
process mirrors the standard procedure, ensuring consistency across environments.

### Key Points
- The Docker image is based on `Ubuntu`.
- Building and testing inside the container follow the same steps as running 
  directly on a native system.

### Steps

#### Build Docker image `rnd`

```
$ docker build -t rnd .
```

#### Create and run a new container from an image

```
$ docker run --rm -it -v $PWD:/rnd -w /rnd rnd
```

## References

Reference was made to the parameters.

* "Linear congruential generator." *Wikipedia*. 2024. [https://en.wikipedia.org/wiki/Linear_congruential_generator#cite_note-LEcuyer99-10](https://en.wikipedia.org/wiki/Linear_congruential_generator#cite_note-LEcuyer99-10).

## LICENSE

MIT
