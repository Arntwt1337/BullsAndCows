#include "func.h"
#include <iostream>

void start_game() {
  std::cout << "Game started";
  srand(time(NULL));
  int ran[4];
  for (int temp = 0; temp < 4; temp++) {
    ran[temp] = rand() % 10;
  }
  game(ran);
}
