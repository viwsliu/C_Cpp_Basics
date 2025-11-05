# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -g

TARGET = main
# Output program name

# list of source files
SOURCES = hello_world.cpp

# object files (generated from source files)
OBJECTS = $(SOURCES:.cpp=.o)

# what runs when 'make' is typed
all: $(TARGET)

# how to build the program
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(TARGET)

# rule that converts .cpp to .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# remove compiled files
clean:
	rm -f $(TARGET) $(OBJECTS)
