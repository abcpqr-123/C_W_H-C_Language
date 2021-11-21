#include <stdio.h>
#include <math.h>

int main(){
  int a = 4;
  int b = 8;

  printf("The value of a + b is: %d\n", a + b );
  printf("The value of a - b is: %d\n", a - b );
  printf("The value of a * b is: %d\n", a * b );
  printf("The value of a / b is: %f\n", a / b );
  // importent note while deviding:
  // printf("The value of 6.0 / 4  is: %f\n", 6.0 / 4); //u have to write
  // 6.0 (float value)
  // //output:
  // // The value of 6.0 / 4  is: 1.500000


  int z;
  z = b * a;
  printf("The value of z is: %d\n", z);

  // output:
  // The value of a + b is: 12
  // The value of a - b is: -4
  // The value of a * b is: 32
  // The value of a / b is: 0.000000
  // The value of z is: 32



  printf("5 when divided by 2 leaves a remaineder of %d\n", 5 % 2 );
  printf("-5 when divided by 2 leaves a remaineder of %d\n", -5 % 2 );
  printf("5 when divided by -2 leaves a remaineder of %d\n", 5 % -2 );


//    output:
//  5 when divided by 2 leaves a remaineder of 1
// -5 when divided by 2 leaves a remaineder of -1
//  5 when divided by -2 leaves a remaineder of 1






  //No operator is assumed to be present
  //printf("The value of 4 * 5 is %d\n", (4)(5) ); --> will not return 20/ wrong!!
  printf("The value of 4 * 5 is: %d\n", (4)*(5));
  //output
  // The value of 4 * 5 is: 20


  //There is no operator to perform exponentiation in c
  // printf("The value of 4 ^ 5 is %d\n", (4)^(5)); --> WILL NOT produce  4 to the power of 5.

  // to get 4 to the power of 5, you can write:
    printf("The value of 4 ^ 5 is: %f\n", pow(4,5));
    //output
    // The value of 4 ^ 5 is: 1024.000000










  //int + int = int
    printf("The value of 6 + 5 is: %d\n", 6 + 5);
    //output:
    // The value of 6 + 5 is: 11

  //int + float = float
    printf("The value of 6 + 5.6 is: %f\n", 6 + 5.6);
    //output:
    // The value of 6 + 5.6 is: 11.600000

  //float + float = float
    printf("The value of 6.1 + 5.6 is: %f\n", 6.1 + 5.6);
    //output:
    // The value of 6.1 + 5.6 is: 11.700000

  //int / int = int
    printf("The value of 6 / 2  is: %d\n", 5/2);
    //output:
    // The value of 6 / 2  is: 2





  // importent note while deviding:
  printf("The value of 6.0 / 4  is: %f\n", 6.0 / 4);
  //output:
  // The value of 6.0 / 4  is: 1.500000
    return 0;
}
