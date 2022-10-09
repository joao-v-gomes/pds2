CC := g++
FLAGS := -I include/ -Wall
LFLAGS := -lm
BUILD := build/
SRC := src/
TARGET := main.out

all: main
	$(CC) $(FLAGS) $(LFLAGS) $(BUILDDIR)/*.o -o $(BUILDDIR)/main.out
main: pedido venda
	$(CC) $(FLAGS) -c $(SRCDIR)/main.cpp -o $(BUILDDIR)/main.o

pedido: produto
	$(CC) $(FLAGS) -c $(SRCDIR)/pedido.cpp -o $(BUILDDIR)/pedido.o

venda:
	$(CC) $(FLAGS) -c $(SRCDIR)/venda.cpp -o $(BUILDDIR)/venda.o

produto: acai cachorro-quente pizza
	$(CC) $(FLAGS) -c $(SRCDIR)/produto.cpp -o $(BUILDDIR)/produto.o

acai:
	$(CC) $(FLAGS) -c $(SRCDIR)/acai.cpp -o $(BUILDDIR)/acai.o

cachorro-quente:
	$(CC) $(FLAGS) -c $(SRCDIR)/cachorro_quente.cpp -o $(BUILDDIR)/cachorro_quente.o

pizza:
	$(CC) $(FLAGS) -c $(SRCDIR)/pizza.cpp -o $(BUILDDIR)/pizza.o

clean:
	rm */build