#include "../src/func.h"
#include <gtest/gtest.h>
#include <time.h>

using namespace std;

TEST(BullsTest, RanTest) {
  srand(time(NULL));
  int ran[4], c[4];
  for (int j = 0; j < 4; j++) {
    ran[j] = rand();
    c[j] = ran[j];
  }
  EXPECT_EQ(bulls_calc(ran, c, 0), 4);
}


