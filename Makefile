CXX = g++
CXXFLAGS = -std=c++11 -Wall -c
LXXFLAGS = -std=c++11
OBJECTS = Q2.o
TARGET = Q2



$(TRAGET) : $(OBJECTS)
	  $(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
Q2.o: Q2.cpp
	$(CXX) $(CXXFLAGS) Q2.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
