
//C W H 15hrs

// write a program to printy the value of a variable i by using
// "Pointer to Pointer " type of variable

#include <stdio.h>

int main(){
int i = 345;
int *ptr;
int **ptr_ptr;

ptr = &i;
ptr_ptr = &ptr;

printf("The value of i is %d\n",  **ptr_ptr);
return 0;
}

// Output:
// The value of i is 345
