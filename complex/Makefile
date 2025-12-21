CC=g++
INCDIRS=-I.
OPT=-O3
FLAGS=-Wall -Wextra -g $(INCDIRS) $(OPT) -std=c++17

CFILES=complex01.cpp cpx.cpp
OBJECTS=complex01.o cpx.o

BINARY=complex_sum

all:$(BINARY)

$(BINARY):$(OBJECTS)
	$(CC) -o $@ $^

%.o:%.cpp
	$(CC) $(FLAGS) -c -o $@ $^

clean:
	rm -rf $(BINARY) $(OBJECTS)