int bulls_calc(int *ran, int *c) { //Считаем быков
  int bull = 0;
  for (int i = 0; i < 4; i++) {
    if (c[i] == ran[i]) {
      bull++;
    }
  }
  return bull;
}
