//C W H - 15hrs

#include <stdio.h>

int main(){
  int n_students = 3;
  int n_subjects = 5;

  int marks[3][5];
  for(int i=0; i<n_students; i++){
    for(int j=0; j<n_subjects; j++){
      printf("Enter the marks of student %d in subject %d: \n ", i+1, j+1 );
      //above instead of i+1, j+1 u can also write i and j. but, then the
      //compiler will ask: Enter the marks of student 0 in subject 0
      scanf("%d", &marks[i][j]);
    }
  }

  for(int i=0; i<n_students; i++){
    for(int j=0; j<n_subjects; j++){
      printf("the marks of student %d in subject %d is: %d \n", i+1, j+1, marks[i][j] );
    }
  }
  return 0;
}



//'output:
// Enter the marks of student 1 in subject 1:
//  11
// Enter the marks of student 1 in subject 2:
//  12
// Enter the marks of student 1 in subject 3:
//  13
// Enter the marks of student 1 in subject 4:
//  14
// Enter the marks of student 1 in subject 5:
//  15
// Enter the marks of student 2 in subject 1:
//  21
// Enter the marks of student 2 in subject 2:
//  22
// Enter the marks of student 2 in subject 3:
//  23
// Enter the marks of student 2 in subject 4:
//  24
// Enter the marks of student 2 in subject 5:
//  25
// Enter the marks of student 3 in subject 1:
//  31
// Enter the marks of student 3 in subject 2:
//  32
// Enter the marks of student 3 in subject 3:
//  33
// Enter the marks of student 3 in subject 4:
//  34
// Enter the marks of student 3 in subject 5:
//  35
// the marks of student 1 in subject 1 is: 11
// the marks of student 1 in subject 2 is: 12
// the marks of student 1 in subject 3 is: 13
// the marks of student 1 in subject 4 is: 14
// the marks of student 1 in subject 5 is: 15
// the marks of student 2 in subject 1 is: 21
// the marks of student 2 in subject 2 is: 22
// the marks of student 2 in subject 3 is: 23
// the marks of student 2 in subject 4 is: 24
// the marks of student 2 in subject 5 is: 25
// the marks of student 3 in subject 1 is: 31
// the marks of student 3 in subject 2 is: 32
// the marks of student 3 in subject 3 is: 33
// the marks of student 3 in subject 4 is: 34
// the marks of student 3 in subject 5 is: 35



// AK-----------AK------------AK-------------AK
