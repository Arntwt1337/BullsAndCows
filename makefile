SRC=src

CC=g++

EXEC_FILE=bin/prog.exe

TEST_FOLDER=test

TEST_FILE = test/test.exe

OF=obj

CPPFLAGS=-Wall -Werror -Wextra -c

GOOGLE_TEST_INCLUDE = /usr/local/include

CPPTEST_FLAGS = -c -Wall -I $(GOOGLE_TEST_INCLUDE)

OBJ=$(OF)/main.o $(OF)/startgame.o $(OF)/maingame.o $(OF)/Cows.o $(OF)/Bulls.o $(OF)/Save.o 

OBJ_TEST=$(OF)/Cows.o $(OF)/Bulls.o $(OF)/test.o $(OF)/main_test.o 

all: $(EXEC_FILE)

test: $(TEST_FILE)

$(OF)/test.o: $(TEST_FOLDER)/test.cpp
	$(CC) $(CPPTEST_FLAGS) $(TEST_FOLDER)/test.cpp -o $(OF)/test.o

$(OF)/main_test.o: $(TEST_FOLDER)/main.cpp
	$(CC) $(CPPFLAGS) $(TEST_FOLDER)/main.cpp -o $(OF)/main_test.o

$(OF)/Save.o: $(SRC)/Save.cpp
	$(CC) $(CPPFLAGS) $(SRC)/Save.cpp -o $(OF)/Save.o

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

$(TEST_FILE): $(OBJ_TEST)
	$(CC) $(TESTFLAG) $(OBJ_TEST) -L /usr/local/lib -l gtest -l pthread -o $(TEST_FILE)
	
clear:
	rm -rf $(OF)/*.o

start:
	./bin/prog.exe

start_test:
	./test/test.exe
