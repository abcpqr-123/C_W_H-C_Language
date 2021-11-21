#include <stdio.h>

void printArry (int *ptr, int n){
  for (int i = 0; i<n; i++){
    printf("The value of element %d is: %d\n", i+1, *(ptr+i) );

// U can also write:
// void printArry (int ptr[], int n){
//   for (int i = 0; i<n; i++){
//     printf("The value of element %d is: %d\n", i+1, *(ptr+i) );

// U can also write:
// void printArry (int ptr[], int n){
//   for (int i = 0; i<n; i++){
//     printf("The value of element %d is: %d\n", i+1,  ptr[i] );


// Note:
// ptr[2] = 40;
//u make change in the value of the array by addressing it like ptr[2] = 40;
// this will make change in 3rd element


// output:
// The value of element 1 is: 2
// The value of element 2 is: 4
// The value of element 3 is: 40
// The value of element 4 is: 8
// The value of element 5 is: 10
// The value of element 6 is: 12
// The value of element 7 is: 14




  }
}

int main(){
  int arr[] = {2,4,6,8,10,12,14};
  printArry(arr, 7);
    // 7 is size of the array.
  // printf("%d", arr[2] );
return 0;
}


// Output:
// The value of element 1 is: 2
// The value of element 2 is: 4
// The value of element 3 is: 6
// The value of element 4 is: 8
// The value of element 5 is: 10
// The value of element 6 is: 12
// The value of element 7 is: 14
