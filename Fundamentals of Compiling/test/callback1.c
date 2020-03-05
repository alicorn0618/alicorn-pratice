#include <stdio.h>
// callback function
int ADD(int *callback(int,int), int a, int b){
  return (*callback)(a,b); // callback add function
}

int add(int a, int b) {
  return a + b;
}
int Multi(int a, int b){
  return a*b;
}
int main(int argc, char const *argv[]) {
  printf("%d\n", add(1, 2));
  printf("%d\n", ADD(add,1,2));
  printf("%d\n", ADD(Multi,1,2));
  return 0;
}
