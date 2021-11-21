#include <stdio.h>

int main() {

int x = 4;
int y = 9;

printf("The value of 3*x - 8*y is %d \n", 3*x - 8*y );

// output:
// The value of 3*x - 8*y is -60
// note:
// operators of higher priority are evaluated first in the absense of parenthesis

printf("The value of 3*x - 8*y is %d \n", 3*(x - 8*y ));
// output:
// The value of 3*x - 8*y is -204



// priority       operators
//  1st             * / %
//  2nd             +   -
//  3rd               =


// int x = 2;
// int y = 3;
// to the bellow printf statement consider x=2 and y=3
printf("the value of 8*y / 3*x is %d \n", 8 * y / 3 * x );

//output:
//the value of 8*y / 3*x is 16
// 8 * y / 3 * x = 24/6 will give wrong answer
// 24/3*2
// 8*2
// 16


  return 0;


}
