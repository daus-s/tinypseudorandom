#include <time.h>
#include <iostream>
#include <cstdint>
//atom
int main()
{
  uint8_t byte = 0;
  int seed = time(NULL);
  byte = seed % 2;
  printf("%o\n", byte);
}
