//C W H-15hrs


// write a program to write an array of 10 integers and store
// multiplication table of 5 in it.


#include <stdio.h>

int main(){
  int mul[10];
for (int i = 0; i < 10; i++) {
  mul[i] = 5*(i+1);
}

for (int i = 0; i < 10; i++) {
  printf("5 X %d = %d \n", i+1, mul[i] );
}
  return 0;
}

// Output:
// 5 X 1 = 5
// 5 X 2 = 10
// 5 X 3 = 15
// 5 X 4 = 20
// 5 X 5 = 25
// 5 X 6 = 30
// 5 X 7 = 35
// 5 X 8 = 40
// 5 X 9 = 45
// 5 X 10 = 50
