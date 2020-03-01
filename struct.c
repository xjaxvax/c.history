#include<stdio.h>
#include<string.h>
#include<stddef.h>

struct sample_st {
  char c;
  int n;
  void *p;
};

struct sample_st_packed {
  char c;
  int n;
  void *p;
} __attribute__ ((packed));

struct sample_st_nopad {
  char c;
  unsigned char pad1[3];
  int n;
  void *p;
};

int main(void)
{
  struct sample_st st;
  struct sample_st_packed st_p;
  struct sample_st_nopad st_nop;

  memset(&st, 0, sizeof(st));
  memset(&st_p, 0, sizeof(st_p));
  memset(&st_nop, 0, sizeof(st_nop));

  printf("sizeof %d\n", sizeof(st));
  printf("offset c %d\n", offsetof(struct sample_st, c));
  printf("offset n %d\n", offsetof(struct sample_st, n));
  printf("offset p %d\n\n", offsetof(struct sample_st, p));

  printf("sizeof %d\n", sizeof(st_p));
  printf("offset c %d\n", offsetof(struct sample_st_packed, c));
  printf("offset n %d\n", offsetof(struct sample_st_packed, n));
  printf("offset p %d\n\n", offsetof(struct sample_st_packed, p));

  printf("sizeof %d\n", sizeof(st_nop));
  printf("offset c %d\n", offsetof(struct sample_st_nopad, c));
  printf("offset pad1 %d\n", offsetof(struct sample_st_nopad, pad1));
  printf("offset n %d\n", offsetof(struct sample_st_nopad, n));
  printf("offset p %d\n", offsetof(struct sample_st_nopad, p));

  return 0;
}


