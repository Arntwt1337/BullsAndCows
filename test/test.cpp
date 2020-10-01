#include "../src/func.h"
#include <gtest/gtest.h>
#include <time.h>

using namespace std;

TEST(BullsTest, EqTest) {
  srand(time(NULL));
  int ran[4], c[4];
  for (int j = 0; j < 4; j++) {
    ran[j] = rand();
    c[j] = ran[j];
  }
  EXPECT_EQ(bulls_calc(ran, c), 4);
}

TEST(BullsTest, UnEqTest) {
  srand(time(NULL));
  int ran[] = {0, 0, 0, 0};
  int c[] = {1, 1, 1, 1};
  EXPECT_EQ(bulls_calc(ran, c), 0);
}

TEST(BullsTest, OneRight) {
  srand(time(NULL));
  int ran[] = {1, 0, 0, 0};
  int c[] = {1, 1, 1, 1};
  EXPECT_EQ(bulls_calc(ran, c), 1);
}

TEST(BullsTest, TwoRight) {
  srand(time(NULL));
  int ran[] = {1, 1, 0, 0};
  int c[] = {1, 1, 1, 1};
  EXPECT_EQ(bulls_calc(ran, c), 2);
}

TEST(BullsTest, ThreeRight) {
  srand(time(NULL));
  int ran[] = {1, 1, 1, 0};
  int c[] = {1, 1, 1, 1};
  EXPECT_EQ(bulls_calc(ran, c), 3);
}

TEST(CowTest, EqTest) {
  srand(time(NULL));
  int ran[4], c[4];
  for (int j = 0; j < 4; j++) {
    ran[j] = rand();
    c[j] = ran[j];
  }
  EXPECT_EQ(cows_calc(ran, c), 4);
}

TEST(CowTest, UnEqTest) {
  srand(time(NULL));
  int ran[] = {0, 0, 0, 0};
  int c[] = {1, 1, 1, 1};
  EXPECT_EQ(cows_calc(ran, c), 4);
}

TEST(CowsTest, OneRight) {
  srand(time(NULL));
  int ran[] = {1, 0, 0, 0};
  int c[] = {1, 1, 1, 1};
  EXPECT_EQ(cows_calc(ran, c), 1);
}

TEST(CowsTest, TwoRight) {
  srand(time(NULL));
  int ran[] = {1, 1, 0, 0};
  int c[] = {1, 1, 1, 1};
  EXPECT_EQ(cows_calc(ran, c), 2);
}

TEST(CowsTest, ThreeRight) {
  srand(time(NULL));
  int ran[] = {1, 1, 1, 0};
  int c[] = {1, 1, 1, 1};
  EXPECT_EQ(cows_calc(ran, c), 3);
}
