FORMATTER = clang-format -i
CXXFLAGS = -g -std=c++20 -O0 -Wall -Wextra --pedantic-errors

TARGET = main
SRCS = main.cpp

all: $(TARGET)
clean:
	rm -f $(TARGET)
check: $(TARGET)
	./$(TARGET)
	@echo "*** Test passed. ***"
format:
	$(FORMATTER) $(SRCS)

.PHONY: all check clean format
