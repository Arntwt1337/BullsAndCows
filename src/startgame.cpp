#include "func.h"
#include <iostream>

void start_game() {
  std::cout << "Game started";
  int game_flow;
  srand(time(NULL));
  int ran[4];
  for (int temp = 0; temp < 4; temp++)
    ran[temp] = rand() % 10;
  game_flow = game(ran);
  switch (game_flow) {
  case 0:
    std::cout << "Do you really want to exit\n Yes -0     Restart - 1\n";
    break;
  case 1:
    std::cout << "You won!\n 1 - to restart, 0 - to exit";
  }
}
