CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = calculator
SOURCES = main.cpp calculator.cpp
HEADERS = calculator.h

$(TARGET): $(SOURCES) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(TARGET)

run: $(TARGET)
	./$(TARGET)

.PHONY: clean run
