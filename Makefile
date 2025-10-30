# Makefile for Fun with Quiz
# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET_DIR = bin

# Targets
SIMPLE = quiz_simple
ADVANCED = quiz_advanced
MODULAR = quiz_modular

# Source files for modular version
MODULAR_SOURCES = question_manager.c score_manager.c
MODULAR_OBJECTS = $(MODULAR_SOURCES:.c=.o)
MODULAR_HEADERS = quiz_structures.h question_manager.h score_manager.h

# Default target
all: $(SIMPLE) $(ADVANCED)

# Simple version
$(SIMPLE): code.c
	@echo "Compiling simple version..."
	$(CC) $(CFLAGS) code.c -o $(SIMPLE)
	@echo "✅ Simple version compiled: $(SIMPLE)"

# Advanced version
$(ADVANCED): quiz_advanced.c
	@echo "Compiling advanced version..."
	$(CC) $(CFLAGS) quiz_advanced.c -o $(ADVANCED)
	@echo "✅ Advanced version compiled: $(ADVANCED)"

# Modular version (when main_modular.c is created)
# $(MODULAR): $(MODULAR_OBJECTS) main_modular.o
# 	@echo "Linking modular version..."
# 	$(CC) $(CFLAGS) $(MODULAR_OBJECTS) main_modular.o -o $(MODULAR)
# 	@echo "✅ Modular version compiled: $(MODULAR)"

# Compile object files
%.o: %.c $(MODULAR_HEADERS)
	@echo "Compiling $<..."
	$(CC) $(CFLAGS) -c $< -o $@

# Clean build files
clean:
	@echo "Cleaning build files..."
	rm -f $(SIMPLE) $(ADVANCED) $(MODULAR) *.o *.exe
	@echo "✅ Cleaned!"

# Run simple version
run-simple: $(SIMPLE)
	@echo "Running simple version..."
	./$(SIMPLE)

# Run advanced version
run-advanced: $(ADVANCED)
	@echo "Running advanced version..."
	./$(ADVANCED)

# Install (copy to system path)
install: $(ADVANCED)
	@echo "Installing..."
	cp $(ADVANCED) /usr/local/bin/
	@echo "✅ Installed! Run with: quiz_advanced"

# Help
help:
	@echo "Fun with Quiz - Makefile Help"
	@echo "=============================="
	@echo "make              - Build all versions"
	@echo "make simple       - Build simple version"
	@echo "make advanced     - Build advanced version"
	@echo "make run-simple   - Build and run simple version"
	@echo "make run-advanced - Build and run advanced version"
	@echo "make clean        - Remove build files"
	@echo "make install      - Install to system (Unix/Linux only)"
	@echo "make help         - Show this help message"

.PHONY: all clean run-simple run-advanced install help
