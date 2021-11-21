// what will the following line will produce in a c program:
// printf("%d%d%d\n", a,++a,a++);


#include <stdio.h>

int main(){
  int a = 3;
  printf("%d %d %d\n", a, ++a, a++);
  return 0;
}




//the output was 5 5 3 beacuse the copiler will run a, ++a, a++ from
//RIGHT to LEFT
