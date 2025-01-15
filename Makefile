# Compiler and flags
CXX := g++
CXXFLAGS := -Wall -Wextra -Iinclude -std=c++17
LDFLAGS := 

# Directories
SRC_DIR := src
BUILD_DIR := build
INCLUDE_DIR := include

# Target executable
TARGET := b10tob2
EXECUTABLE := $(BUILD_DIR)/$(TARGET).exe

# Collect all source files
SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRC_FILES))

# Default rule
application: $(EXECUTABLE)

# Build the application
$(EXECUTABLE): $(OBJ_FILES)
	[ -d $(BUILD_DIR) ] || mkdir $(BUILD_DIR)
	$(CXX) $(OBJ_FILES) -o $@ $(LDFLAGS)

# Compile source files into object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	[ -d $(BUILD_DIR) ] || mkdir $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean build artifacts
clean:
	rm -rf $(BUILD_DIR)

# Phony targets
.PHONY: all clean

