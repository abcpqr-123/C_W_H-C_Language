//C W H-15hrs

//Arrays taking user Input of marks Using Loops:


#include <stdio.h>
int main(){
  int marks[5];

  for(int i=0; i<5; i++){
    printf("Enter the value of marks for student %d: ", i+1);
    scanf("%d", &marks[i]);
  }

  for(int i=0; i<5; i++){
    printf("The value of marks for student %d is: %d \n", i+1, marks[i] );
  }
  return 0;
}

//output:
// Enter the value of marks for student 1: 10095
// Enter the value of marks for student 2: 90
// Enter the value of marks for student 3: 96
// Enter the value of marks for student 4: 95
// Enter the value of marks for student 5: 98
// The value of marks for student 1 is: 10095
// The value of marks for student 2 is: 90
// The value of marks for student 3 is: 96
// The value of marks for student 4 is: 95
// The value of marks for student 5 is: 98
