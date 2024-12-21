# RandomEngine

乱数生成器をカスタム実装し、標準の乱数分布 std::uniform_int_distribution と組み合わせて使用する方法を実践的に説明する。

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

## How to Test

10 回サイコロを振った際の出目を表示する。

```
$ make run
```

## Setting Up a Docker Environment for Build/Test

This project supports building and testing within a Docker container. The process mirrors the standard
build/test procedure, ensuring consistency across environments.

### Key Points
- The Docker image is based on `Ubuntu`.
- Building and testing inside the container follow the same steps as running directly on a native system.

### Steps

#### Build Docker image `rnd`

```
$ docker build -t rnd .
```

#### Create and run a new container from an image

```
$ docker run --rm -it -v $PWD:/rnd -w /rnd rnd
```

# References

Linear congruential generator を実装する際に、特にパラメタの値について参照した。

Linear congruential generator
Wikipedia

https://en.wikipedia.org/wiki/Linear_congruential_generator#cite_note-LEcuyer99-10
