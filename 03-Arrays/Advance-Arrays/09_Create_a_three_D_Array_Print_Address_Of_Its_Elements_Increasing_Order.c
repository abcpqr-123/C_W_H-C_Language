//C W H-15hrs


// Create a three_D array and print the address of its element in increasing
// order


#include <stdio.h>
int main(){
int arr[2][3][4];
for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 3; j++) {
    for (int k = 0; k < 4; k++) {
        printf("The address of arr[%d] [%d] [%d] is %u\n", i, j, k, &arr[i][j][k] );
      }
    }
  }
return 0;
}

//Output:
// The address of arr[0] [0] [0] is 6422196
// The address of arr[0] [0] [1] is 6422200
// The address of arr[0] [0] [2] is 6422204
// The address of arr[0] [0] [3] is 6422208
// The address of arr[0] [1] [0] is 6422212
// The address of arr[0] [1] [1] is 6422216
// The address of arr[0] [1] [2] is 6422220
// The address of arr[0] [1] [3] is 6422224
// The address of arr[0] [2] [0] is 6422228
// The address of arr[0] [2] [1] is 6422232
// The address of arr[0] [2] [2] is 6422236
// The address of arr[0] [2] [3] is 6422240
// The address of arr[1] [0] [0] is 6422244
// The address of arr[1] [0] [1] is 6422248
// The address of arr[1] [0] [2] is 6422252
// The address of arr[1] [0] [3] is 6422256
// The address of arr[1] [1] [0] is 6422260
// The address of arr[1] [1] [1] is 6422264
// The address of arr[1] [1] [2] is 6422268
// The address of arr[1] [1] [3] is 6422272
// The address of arr[1] [2] [0] is 6422276
// The address of arr[1] [2] [1] is 6422280
// The address of arr[1] [2] [2] is 6422284
// The address of arr[1] [2] [3] is 6422288
