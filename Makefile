FORMATTER = clang-format -i
CXXFLAGS = -g -std=c++20 -O0 -Wall -Wextra --pedantic-errors

TARGET = main
SRCS = main.cpp

all: $(TARGET)
clean:
	rm -f $(TARGET)
run: $(TARGET)
	./$(TARGET)
check: $(TARGET)
	./$(TARGET)
	@echo "*** Test passed. ***"
format:
	$(FORMATTER) $(SRCS)

.PHONY: all check run clean format
