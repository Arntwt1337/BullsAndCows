#include <iostream>

int main() {
  int choose;
  while (true) {
    std::cin >> choose;
    switch (choose) {
    case 0:
      exit(0);
      break;
    case 1:
      system("clear");
      break;
    default:
      std::cout << "Enter 0 or 1";
    }
  }
