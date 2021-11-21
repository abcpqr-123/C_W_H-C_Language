//C W H-15hrs

//way to print the nuumbers without using the arrays

#include <stdio.h>

int main(){
  int marks1, marks2, marks3, marks4;
  marks1 = 34;
  marks2 = 45;
  marks3 = 67;
  marks4 = 88;
  return 0;
}





//printing the same examplke by using the arrays.


#include <stdio.h>

int main(){
  int marks[4];

  printf("Enter the value of marks for stdudent 1: ");
  scanf("%d", &marks[0]);
  printf("Enter the value of marks for stdudent 2: ");
  scanf("%d", &marks[1]);
  printf("Enter the value of marks for stdudent 3: ");
  scanf("%d", &marks[2]);
  printf("Enter the value of marks for stdudent 4: ");
  scanf("%d", &marks[3]);

    printf("You have entered %d %d %d and %d", marks[0],
      marks[1], marks[2], marks[3]);

  return 0;
}


//output:
// Enter the value of marks for stdudent 1: 100
// Enter the value of marks for stdudent 2: 95
// Enter the value of marks for stdudent 3: 90
// Enter the value of marks for stdudent 4: 98
// You have entered 100 95 90 and 98
