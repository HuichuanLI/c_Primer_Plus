SHELL=cmd.exe
OBJ := $(wildcard *.cpp)
TARGET  := $(patsubst %.cpp, %, $(OBJ)) 
#TARGET := $(OBJ:%.cpp=%)

all:$(TARGET)
Point:Point.o
	g++ -o $@ $^
Student:Student.o
	g++ -o $@ $^

clean:
	del *.o *.exe
