SRC=src

CC=g++

EXEC_FILE=bin/prog.exe

OF=obj

CPPFLAGS=-Wall -Werror -Wextra -c

OBJ=$(OF)/main.o $(OF)/startgame.o

all: $(EXEC_FILE)

$(OF)/startgame.o: $(SRC)/startgame.cpp
	$(CC) $(CPPFLAGS) $(SRC)/startgame.cpp -o $(OF)/startgame.o

$(OF)/main.o: $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) $(SRC)/main.cpp -o $(OF)/main.o

$(EXEC_FILE): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC_FILE)

start:
	./bin/prog.exe

