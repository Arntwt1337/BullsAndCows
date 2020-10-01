#include "func.h"
#include <ctime>
#include <iostream>

int game(int *ran) {
  int c[10], a, b; // c - ваше слово
  while (true) {
    int cow = 0;
    int bull = 0;
    std::cin >> a;
    if (a == 0) {
      return 0;
    }
    for (int i = 3; i >= 0; i--) {
      b = a % 10;
      c[i] = b;
      a = (a - b) / 10;
    }
    bull = bulls_calc(ran, c, bull);
    cow = bulls_calc(ran, c, cow);
    std::cout << bull << " - bulls   " << cow - bull << " - cows";
    if (bull == 4) {
      return 1;
    }
  }
  return 0;
}
