// Write a program to decrypt a string which was encrypted in file
// 06.

#include <stdio.h>
void decrypt (char *c){
  char *ptr = c;
  while (*ptr != '\0'){
    *ptr = *ptr - 1;
    ptr++;

  }
}


int main() {
  char c[] = "tvszb";
   decrypt(c);
   printf("Decrypt string is: %s\n", c);


     return 0;
}


// Output:
// Decrypt string is: surya
