CC=g++
CPPFLAGS=-c -g -Wall 
LDFLAGS=-lcppunit
OBJ=obj/
SRC=src/
BIN=bin/
INCLUDE=inc/

all:test


test: $(OBJ)CPPMAIN.o $(OBJ)CPPtest.o 
		$(CC) -o test $(OBJ)CPPMAIN.o $(OBJ)CPPtest.o  $(LDFLAGS)
		mv test $(BIN)

$(OBJ)CPPMAIN.o: $(SRC)CPPMAIN.cpp
		$(CC) $(CPPFLAGS) $(SRC)CPPMAIN.cpp -I $(INCLUDE)
		mv CPPMAIN.o $(OBJ)

$(OBJ)CPPtest.o: $(SRC)CPPtest.cpp
		$(CC) $(CPPFLAGS) $(SRC)CPPtest.cpp -I $(INCLUDE)
		mv CPPtest.o $(OBJ)



valgrind: $(BIN)test
		valgrind --leak-check=full --show-reachable=yes	$(BIN)test 1>$(BIN)/valgrind.txt

clean:
		rm -f $(OBJ)*.o 
		rm -f $(BIN)test
		rm -f $(BIN)/valgrind.txt

