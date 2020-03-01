#include <stdio.h>

int max2(int n1, int n2){
  if(n1 > n2){
    return n1;
  }else{
    return n2;
  }
}

int main(void)
{
  printf("%d\n",max2(2, 3));

}


