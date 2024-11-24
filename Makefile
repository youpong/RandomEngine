CXX = clang++
CXXFLAGS = -v -g -std=c++20 -O0 -Wall -Wextra --pedantic-errors# -stdlib=libc++

TARGET = main

all: $(TARGET)
clean:
	rm -f $(TARGET)
check: $(TARGET)
	./$(TARGET)

.PHONY: all check clean
