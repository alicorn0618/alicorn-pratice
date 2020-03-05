#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char *src = "abc";
  char *dst = "def";

  char* ret = (char*)malloc(strlen(src)+strlen(dst)+1);
  ret = strcat(*src,*dst);
  printf("%s\n",ret);
  free(ret);
  return 0;
}
