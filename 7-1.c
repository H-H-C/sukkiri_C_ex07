#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  srand((unsigned)time(NULL)); //乱数発生の準備
  enum
  {
    FIRE,
    WATER,
    WIND,
    EARTH
  }; //宝石の属性を示す定数(０〜３)

  //宝石の属性をランダム
  for (int i = 0; i < 10; i++)
  {
    int gemType = rand() % 4;
    switch (gemType)
    {
    case FIRE:
      printf("$");
      break;
    case WATER:
      printf("*");
      break;
    case WIND:
      printf("@");
      break;
    case EARTH:
      printf("#");
      break;
    }
    printf(" "); //見やすいようにスペース入れる
  }

  return 0;
}