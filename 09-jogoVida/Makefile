CC := g++
FLAGS := -I include/ -Wall
LFLAGS := -lm
BUILDDIR := build
SRCDIR := src
TARGET := main.out

all: clean main
	$(CC) $(FLAGS) *.o -o $(TARGET)

main: jogo-vida
	$(CC) $(FLAGS) -c main.cpp -o main.o

jogo-vida: 
	$(CC) $(FLAGS) -c jogo_da_vida.cpp -o jogo_da_vida.o

clean:
	rm -rf *.o
	rm -rf $(TARGET)