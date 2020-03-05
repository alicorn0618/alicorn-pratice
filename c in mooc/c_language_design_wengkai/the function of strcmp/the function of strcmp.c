#include <stdio.h>
#include <string.h>
int mycmp()
{
  int idx = 0;
  while ( s1[idx] == s2[idx] && s1[idx] != '0' ) {
    //if (s1[idx != s2[idx]])
    //{
    //  break;
    //}
    //else if ( s1[idx == '\0'])
    //{
    // break
    //}
    idx ++;
  }
  return s1[idx] - s2[idx];
}
int main(int argc, char const *argv[])
{
  char s1[] = "abc";
  char s2[] = "Abc";
  printf("%d\n", strcmp( s1, s2));

  return 0;
}
