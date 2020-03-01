#include <stdio.h>

double average2(int n1, int n2){
  double avg = ((double)n1 + (double)n2) / 2;

  return avg;
}

int main(void)
{
  printf("%.1lf\n",average2(2, 3));
  
  return 0;
}
