#include <stdio.h>

typedef char String[1024];

int main(void)
{
  String msg = "HAL";
  for (int i = 0; i < 3; i++)
  {
    printf("%c\n", msg[i]);
  }

  return 0;
}