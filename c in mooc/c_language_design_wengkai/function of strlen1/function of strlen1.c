#include <stdio.h>
#include <string.h>
int mylen(const char* s)
{
  int idx =0;
  while(s[idx] != '\0')
  {
    idx ++;
  }
}
int main(int argc, char const *argv[])
{
  char line[] = "Hello";
  printf("strlen=%lu\n",strlen(line));
  printf("sizeof=%lu\n",sizeof(line));
  return 0;
}
