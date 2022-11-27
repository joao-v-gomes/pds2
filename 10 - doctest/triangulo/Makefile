SRCDIR = src
TESTDIR = tests
CFLAGS = -I include -I third_party
BUILDDIR = build
CC =  g++

all: triangulo
	$(CC) $(CFLAGS) $(BUILDDIR)/triangulo.o -o $(BUILDDIR)/main.out

test: triangulo
	$(CC) $(CFLAGS) $(TESTDIR)/*.cpp $(BUILDDIR)/triangulo.o -o $(BUILDDIR)/test.out

triangulo:
	$(CC) $(CFLAGS) -c triangulo.cpp -o $(BUILDDIR)/triangulo.o

clean:
	$(RM) $(BUILDDIR)/*
