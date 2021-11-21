
//C W H-15hrs

//Arrays with pointers



#inlude <stdio.h>

int main(){
  int marks[4];
  int *ptr;
  ptr = &marks[0];
    // or
    // u can also write:
    // ptr = marks;


//note:  Here u r giving input to the pointer value. and that pointer is
//       printing the marks enterd in an array.

    for(int i = 0; i<4; i++){
      printf("Enter the value of marks for student %d: \n", i+1);
      scanf("%d", ptr);
      ptr ++;
    }

  for(int i = 0; i < 4; i++) {
    printf("The value of marks for student %d is: %d \n",i+1, marks[i] );
  }
  return 0;
}

// output:
// Enter the value of marks for student 1:
// 20
// Enter the value of marks for student 2:
// 40
// Enter the value of marks for student 3:
// 60
// Enter the value of marks for student 4:
// 80
// The value of marks for student 1 is: 20
// The value of marks for student 2 is: 40
// The value of marks for student 3 is: 60
// The value of marks for student 4 is: 80
