OBJ := ./graphml.o
FLAGS := -std=c++11 -O2

all:
	g++ $(FLAGS) -I../ -c Graph.cpp
	g++ $(FLAGS) -I../ -c main.cpp
	g++ $(FLAGS) $(OBJ) Graph.o main.o -o boost2gml
clean:
	rm -rf Graph.o main.o boost2gml
