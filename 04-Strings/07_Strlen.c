// Strlen library function

// this function is used to count the numbers of characters
// in the string excluding the null('\0') character


#include <stdio.h>
#include <string.h>

int main(){
  char *st = "Surya";
  int a = strlen(st);
  printf("The length of st is %d\n", a);
}

// output: 
// The length of st is 5
