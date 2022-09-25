CC := g++
SRCDIR := src
BUILDDIR := build
TARGET := main.out
CFLAGS := -g -Wall -O3 -std=c++11 -I include/

all: main
	$(CC) $(CFLAGS) -lm $(BUILDDIR)/*.o -o $(BUILDDIR)/main.out

fogao:
	$(CC) $(CFLAGS) -c $(SRCDIR)/fogao.cpp -o $(BUILDDIR)/fogao.o
#
geladeira:
	$(CC) $(CFLAGS) -c $(SRCDIR)/geladeira.cpp -o $(BUILDDIR)/geladeira.o
#
estoque: fogao geladeira
	$(CC) $(CFLAGS) -c $(SRCDIR)/estoque.cpp -o $(BUILDDIR)/estoque.o
#

# Remova as tres linhas abaixo
# old:
# @mkdir build/old/
# $(CC) $(CFLAGS) -c src/old.cpp -o $(BUILDDIR)/old.o

# Modifique a funcao main
main: estoque
	$(CC) $(CFLAGS) -c $(SRCDIR)/main.cpp -o $(BUILDDIR)/main.o
	
# main: old
# $(CC) $(CFLAGS) build/old.o src/main.cpp -o $(TARGET)

clean:
	$(RM) -r $(BUILDDIR)/*.o