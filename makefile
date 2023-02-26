all: compile link

compile:
	g++ -c src/main.cpp

link:
	g++ main.o -o OPS -lsfml-system -lsfml-network