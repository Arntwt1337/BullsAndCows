int cows_calc(int *ran, int *c) { //Считаем коров
  int cow = 0;
  for (int i = 0; i < 4; i++) {
    if (c[i] != c[i - 1] || i == 0) {
      for (int j = 0; j < 4; j++) {
        if (c[i] == ran[j]) {
          cow++;
        }
      }
    }
  }
  return cow;
}
