CC=g++
INCDIRS=-I.
OPT=-O3
FLAGS=-Wall $(OPT) -std=c++17

CFILES=complex01.cpp cpx.cpp
OBJECTS=complex01.o cpx.o

BINARY=complex_sum

all:$(BINARY)

$(BINARY):$(OBJECTS)
	$(CC) -o $@ $^

%.o:%.cpp
	$(CC) $(FLAGS) -c $@ $^

clean:
	rm -rf $(BINARY) $(OBJECTS)