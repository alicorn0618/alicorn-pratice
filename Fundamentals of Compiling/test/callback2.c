#include <stdio.h>
#include <algorithm>

bool cmp(int a, int b){
  return a > b;
}

int main(void){
  int a[8] = {5, 43, 1, 7, 8, 13, 0, 74};
  std::sort(a, a+10, cmp); //callback
  for (int i =0; i < (sizof(a) / sizeof(int)); i++){
    printf("%d\n", a[i]);
  }
  return 0;
}
