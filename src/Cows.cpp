int cows_calc(int *ran, int *c, int cow) { //Считаем коров
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (c[i] == ran[j]) {
        cow++;
      }
    }
  }
  return cow;
}
