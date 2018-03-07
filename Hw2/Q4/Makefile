CXX = g++
CXXFLAGS = -std=c++11 -Wall -c
LXXFLAGS = -std=c++11
OBJECTS = Q4.o
TARGET = Q4



$(TRAGET) : $(OBJECTS)
	  $(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
Q4.o: Q4.cpp
	$(CXX) $(CXXFLAGS) Q4.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
