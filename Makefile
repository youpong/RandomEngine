FORMATTER = clang-format -i
CXXFLAGS = -g -std=c++20 -O0 -Wall -Wextra --pedantic-errors

TARGET = main
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)
clean:
	rm -f $(TARGET) $(OBJS)
run: $(TARGET)
	./$(TARGET)
check: $(TARGET)
	./$(TARGET)
	@echo "*** Test passed. ***"
format:
	$(FORMATTER) $(SRCS) *.h

$(TARGET): $(OBJS)
	$(CXX) -o $@ $^
main.o: random_engine.h

.PHONY: all check run clean format
