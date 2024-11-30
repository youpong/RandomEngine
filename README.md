# README

乱数生成器を独自に実装し、標準の乱数分布と組み合わせて使用する方法を実践的に説明する。

* Requisite

written in C++20, you will need a recent version of a C++ compiler and C++ standard 
library. 

# Tested Environment

macOS と Linux でテストしている。より詳細には以下の通り。

* macOS 15.1
* Xcode 16.1

* Ubuntu 24.04.1 LTS
* gcc 13.2.0
* clang 18.1.3

## Build

```
$ make main
```

## Run

10 回サイコロを振った際の出目を表示する。

```
$ ./main
```


# Docker

## Build Docker image `random`

```
$ docker build -t random .
```

## Create and run a new container from an image
```
$ docker run --rm -it -v $PWD:/random -w /random random 
```

# References

Linear congruential generator を実装する際に、特にパラメタの値について参照した。

Linear congruential generator
Wikipedia

https://en.wikipedia.org/wiki/Linear_congruential_generator#cite_note-LEcuyer99-10