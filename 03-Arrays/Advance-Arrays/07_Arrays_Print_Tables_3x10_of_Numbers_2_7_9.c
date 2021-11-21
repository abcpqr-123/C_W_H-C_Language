//C W H-15hrs



// Create an array of size (3 X 10) contaning multiplication
// tables of the numbers 2, 7 and 9 respectively.


#include <stdio.h>


void printTable (int *mulTable, int num, int n){
  printf("The multiplication table of %d is :\n", num);
  for(int i=0; i<n; i++){
    mulTable[i] = num*(i+1);
  }

  for(int i = 0; i < n; i++) {
    printf("%dX%d = %d\n",num, i+1, mulTable[i]);
  }
  printf("*************************************\n\n");
}

int main(){
  int mulTable[3][10];
  printTable(mulTable[0], 2, 10);
  printTable(mulTable[1], 7, 10);
  printTable(mulTable[2], 9, 10);

return 0;
}


// output:
// The multiplication table of 2 is :
// 2X1 = 2
// 2X2 = 4
// 2X3 = 6
// 2X4 = 8
// 2X5 = 10
// 2X6 = 12
// 2X7 = 14
// 2X8 = 16
// 2X9 = 18
// 2X10 = 20
// *************************************
//
// The multiplication table of 7 is :
// 7X1 = 7
// 7X2 = 14
// 7X3 = 21
// 7X4 = 28
// 7X5 = 35
// 7X6 = 42
// 7X7 = 49
// 7X8 = 56
// 7X9 = 63
// 7X10 = 70
// *************************************
//
// The multiplication table of 9 is :
// 9X1 = 9
// 9X2 = 18
// 9X3 = 27
// 9X4 = 36
// 9X5 = 45
// 9X6 = 54
// 9X7 = 63
// 9X8 = 72
// 9X9 = 81
// 9X10 = 90
// *************************************
