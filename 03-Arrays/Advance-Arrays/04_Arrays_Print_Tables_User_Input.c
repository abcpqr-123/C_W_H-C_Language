//C W H-15hrs



// write a program to write an array of 10 integers and store
// multiplication table by taking the user input.



#include <stdio.h>

int main(){
  int number;
  printf("Enter the number to print the table of that number: \n");
  scanf("%d", &number);

  int mul[10];
for (int i = 0; i < 10; i++) {
  mul[i] = number*(i+1);
}

for (int i = 0; i < 10; i++) {
  printf("%d X %d = %d \n",  number, i+1, mul[i] );
}
  return 0;
}

// output:
// Enter the number to print the table of that number:
// 6
// 6 X 1 = 6
// 6 X 2 = 12
// 6 X 3 = 18
// 6 X 4 = 24
// 6 X 5 = 30
// 6 X 6 = 36
// 6 X 7 = 42
// 6 X 8 = 48
// 6 X 9 = 54
// 6 X 10 = 60
