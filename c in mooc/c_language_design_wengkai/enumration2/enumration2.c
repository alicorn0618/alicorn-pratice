#include <stdio.h>

enum clor { red, yellow, green};

void f(enum color c);

int main(int argc, char const *argv[]) {
  enum color t = red;

  scanf("%d\n", t);
  f(t);

  return 0;
}

void f(enum color c)
{
  printf("%d\n", c);
}
