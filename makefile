CXX := g++
CXXFLAGS := -Wall -g
LDFLAGS := -g
TARGET := marihuana
SRCS := $(wildcard *.cpp) $(wildcard */*.cpp)
OBJS := $(patsubst %.cpp,%.o,$(SRCS))
LIBS := -lsfml-graphics -lsfml-system -lsfml-window


all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) -o $@ $^ $(LDFLAGS) $(LIBS)
	
%.o: %.c
	$(CXX) $(CXXFLAGS) -c -o $@ $^ 
	
clean:
	rm -rf $(TARGET) *.o
	
.PHONY: all clean