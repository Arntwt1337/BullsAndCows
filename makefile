SRC=src

CC=g++

EXEC_FILE=bin/prog.exe

OF=obj

CPPFLAGS=-Wall -Werror -Wextra -c

OBJ=$(OF)/main.o $(OF)/startgame.o $(OF)/maingame.o $(OF)/Cows.o $(OF)/Bulls.o

all: $(EXEC_FILE)

$(OF)/Cows.o: $(SRC)/Cows.cpp
	$(CC) $(CPPFLAGS) $(SRC)/Cows.cpp -o $(OF)/Cows.o

$(OF)/Bulls.o: $(SRC)/Bulls.cpp
	$(CC) $(CPPFLAGS) $(SRC)/Bulls.cpp -o $(OF)/Bulls.o

$(OF)/maingame.o: $(SRC)/maingame.cpp
	$(CC) $(CPPFLAGS) $(SRC)/maingame.cpp -o $(OF)/maingame.o

$(OF)/startgame.o: $(SRC)/startgame.cpp
	$(CC) $(CPPFLAGS) $(SRC)/startgame.cpp -o $(OF)/startgame.o

$(OF)/main.o: $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) $(SRC)/main.cpp -o $(OF)/main.o

$(EXEC_FILE): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC_FILE)

clear:
	rm -rf $(OF)/*.o

start:
	./bin/prog.exe

