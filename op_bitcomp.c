#include<stdio.h>

int main(void)
{
  int val, mask = 0x03;

  val = 0xdeadbeef;

  printf("%x\n", val & mask);
  printf("%x\n", val & ~mask);

  return 0;
}
