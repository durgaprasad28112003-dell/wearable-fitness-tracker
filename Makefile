CXX = g++
CXXFLAGS = -Iinclude

SRC = src/main.cpp src/sensor.cpp src/logger.cpp

TARGET = fitness_tracker

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
