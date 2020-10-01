#include "func.h"
#include <iostream>
#include <fstream>

void save(int step) {
  std::cout << "You won!\nEnter your name: ";
  std::string name;
  std::cin >> name;
  std::ofstream save_file;
  save_file.open("Winners.txt", std::ios::app);
  save_file << name << ":" << step << "\n";
  save_file.close();
  std::cout << "Saving complete\n";
}
