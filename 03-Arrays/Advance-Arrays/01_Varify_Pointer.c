//C W H-15hrs



// Create an array of 10 numbers.Verify using pointer Arithmatic that
// (ptr+2) points to the third element where ptr is a pointer pointing
// to the first element of the array.


#include <stdio.h>

int main(){
  int arr[10];
  // int *ptr = &arr[0];
  //OR
  //U can also write,
   int *ptr = arr;
        ptr = ptr + 2;
        if(ptr == &arr[2]){
          printf("These point to the same location \n" );
        }else{
          printf("These do not point to the same location in memory \n" );
        }

  return 0;
}


// output:
// These point to the same location
