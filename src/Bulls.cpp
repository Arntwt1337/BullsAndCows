int bulls_calc(int *ran, int *c, int bull) { //Считаем быков
  for (int i = 0; i < 4; i++) {
    if (c[i] == ran[i]) {
      bull++;
    }
  }
  return bull;
}
