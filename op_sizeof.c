#include <stdio.h>

int main(void)
{
  char s[] = "hello";
  char *p = "hello";
  int n[] = {1, 2, 3};

  printf("s[] %d\n",sizeof(s));
  printf("*p[] %d\n",sizeof(p));

  return 0;
}
