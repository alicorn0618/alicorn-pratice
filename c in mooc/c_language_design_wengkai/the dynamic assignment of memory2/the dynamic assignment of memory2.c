#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  void *p;
  int cnt = 0;
  while ((p = malloc(100*1024*1024)) ) {
    cnt ++;
  }
  printf("assign space of %d00MB\n", cnt);

  return 0;
}
