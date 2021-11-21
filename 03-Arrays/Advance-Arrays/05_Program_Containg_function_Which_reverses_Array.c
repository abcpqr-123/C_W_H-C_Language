//C W H-15hrs


// write a program contaning a function which reverses the array
// passed to it.

#include <stdio.h>
  void reverse(int *arr, int n){
    int temp;
     for (int i = 0; i < (n/2); i++) {
       temp = arr[i];
       arr[i] = arr[n-i-1];
       arr[n-i-1] = temp;
     }
  }
int main(){
    int arr[] = { 2, 4, 6, 8, 10, 12, 14};
    reverse (arr, 7);
    for(int i=0; i<7; i++){
      printf("The value of %d element is: %d\n", i, arr[i] );
    }

   return 0;
}

// output:
// The value of 0 element is: 14
// The value of 1 element is: 12
// The value of 2 element is: 10
// The value of 3 element is: 8
// The value of 4 element is: 6
// The value of 5 element is: 4
// The value of 6 element is: 2
