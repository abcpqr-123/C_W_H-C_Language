//C W H-15hrs
// temperature in celsius to Fahrenheit User Input:
#include <stdio.h>

int main(){
  float celsius;
  float far;

  printf("Enter the temperature in celsius: \n");
  scanf("%f", &celsius);

  far = (celsius * 9/5) + 32;

  printf("The value of this celsius temperature in Fahrenheit is: %f\n", far );

return 0;
}

// output:
// Enter the temperature in celsius:
// 37
// The value of this celsius temperature in Fahrenheit is: 98.599998
