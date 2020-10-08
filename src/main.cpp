#include "func.h"
#include <iostream>

int main() {
  system("clear");
  system("figlet BULLS");
  std::cout << "\n";
  system("figlet and COWS");
  std::cout << "          0 - to exit, 1 - to start\n";
  int choose;
  while (true) {
    std::cin >> choose;
    switch (choose) {
    case 0:
      return 0;
    case 1:
      system("clear");
      start_game();
      break;
    default:
      std::cout << "Enter 0 or 1";
    }
  }
}
