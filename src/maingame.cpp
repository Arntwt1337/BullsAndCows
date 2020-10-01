#include "func.h"
#include <ctime>
#include <iostream>

int game(int *ran) {
  int c[10], a, b, step = 0; // c - ваше слово
  while (true) {
    int cow = 0;
    int bull = 0;
    step++;
    std::cin >> a;
    if (a == 0) {
      return 0;
    }
    for (int i = 3; i >= 0; i--) { // преобразуем а в ваше слово
      b = a % 10;
      c[i] = b;
      a = (a - b) / 10; // разделяем слово на части
    }
    bull = bulls_calc(ran, c, bull); // считаем быков
    cow = cows_calc(ran, c, cow);    // считаем коров
    std::cout << step << ": " << bull << " - bulls   " << cow - bull
              << " - cows\n";
    if (bull == 4) {
      return 1;
    }
  }
  return 0;
}
