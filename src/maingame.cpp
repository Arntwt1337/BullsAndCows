#include "func.h"
#include <ctime>
#include <iostream>

int game(int *ran) {
  int c[10], a, b; //c - ваше слово
  while (true) {
    std::cin >> a;
    for (int i = 3; i >= 0; i--) {
      b = a % 10;
      c[i] = b;
      a = (a - b) / 10;
    }
  }
  return 0;
}
