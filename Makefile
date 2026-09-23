CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11
TARGET = brazo_robotico

all: $(TARGET)

$(TARGET): main.o RoboticArm.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.o RoboticArm.o

main.o: main.cpp RoboticArm.h
	$(CXX) $(CXXFLAGS) -c main.cpp

RoboticArm.o: RoboticArm.cpp RoboticArm.h
	$(CXX) $(CXXFLAGS) -c RoboticArm.cpp

clean:
	rm -f *.o $(TARGET)

test: all
	./$(TARGET)
