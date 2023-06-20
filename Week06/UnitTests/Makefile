.PHONY: all program
CPP = g++
CPP_FLAGS = -std=c++17 -g
WARNINGS = -Wall -Wextra -Wmissing-include-dirs -Wfloat-equal -Wredundant-decls -Winit-self -Wshadow -Wconversion
STANDARDS = -pedantic -pedantic-errors
PROGRAM_NAME = program.exe
TESTER_NAME = tests.exe

TEST_FILES = tests.cpp
INCLUDE_DIRS = .
SHARED_FILES = 

all: tests

tests:
	-$(CPP) $(CPP_FLAGS) $(STANDARDS) $(WARNINGS) -I $(INCLUDE_DIRS) -o $(TESTER_NAME) $(SHARED_FILES) $(TEST_FILES)