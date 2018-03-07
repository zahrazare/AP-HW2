CXX = g++
CXXFLAGS = -std=c++11 -Wall -c
LXXFLAGS = -std=c++11
OBJECTS = Q3.o Queue.o 
TARGET = Q3



$(TRAGET) : $(OBJECTS)
	  $(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
Q3.o: Q3.cpp Queue.h
	$(CXX) $(CXXFLAGS) Q3.cpp
Queue.o: Queue.cpp
	$(CXX) $(CXXFLAGS) Queue.cpp

clean:
	rm -f $(TARGET) $(OBJECTS)
