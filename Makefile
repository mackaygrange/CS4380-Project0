# Initialize Variables
CXX := g++
CXXFLAGS := -Wall -Wextra -Iinclude -std=c++17
LDFLAGS := 

SRC_DIR := src
BUILD_DIR := build
INCLUDE_DIR := include
TARGET := b10tob2
EXECUTABLE := $(BUILD_DIR)/$(TARGET)

SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRC_FILES))

# Main Rule for Application
application: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ_FILES)
	[ -d $(BUILD_DIR) ] || mkdir $(BUILD_DIR)
	$(CXX) $(OBJ_FILES) -o $@ $(LDFLAGS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	[ -d $(BUILD_DIR) ] || mkdir $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean Build Artifacts
clean:
	rm -rf $(BUILD_DIR)

# Phony Targets
.PHONY: all clean

