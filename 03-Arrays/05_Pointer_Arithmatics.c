//C W H-15hrs

//Pointer Arithmatics

//int


#include <stdio.h>

int main(){

  int i = 34;
  int *ptr = &i;
  printf("The value of ptr is: %u\n", ptr);

  // ptr++
  ptr = ptr + 1;


  // Note: if u will write ptr + 2 then 8 bytes will get added.
  //       if u will write ptr + 4 then 16 bytes will get added.

  printf("The value of ptr is: %u\n", ptr );
}

// output:
// The value of ptr is: 6422296
//   // Four bytes got added
// The value of ptr is: 6422300



//------------       ---------       -------------


//char


#include <stdio.h>

int main(){
  char a = '3';
  char i = a;
  char *ptr = &i;

  // Note: insted of writing int if u wrote CHAR(char ) then 4 BYTES WILL NOT be
  //       incremented. ONLY 1 BYTE  will be incremented.

  printf("The value of ptr is: %u\n", ptr);

  // ptr++
  ptr = ptr + 1;

  printf("The value of ptr is: %u\n", ptr );
}




// output:
// The value of ptr is: 6422295
// //   //Only 1 byte incrementerd
// The value of ptr is: 6422296



//------------       ---------       -------------

// int

#include <stdio.h>

int main(){

  int i = 34;
  int *ptr = &i;
  printf("The value of ptr is: %u\n", ptr);

  // ptr--
  ptr = ptr - 1;

  printf("The value of ptr is: %u\n", ptr );
}


// output:
// The value of ptr is: 6422296
//   // Four bytes got deleted
// The value of ptr is: 6422292


//-----------       ---------         ------------


//float


#include <stdio.h>

int main(){
  float f = 3.4;
  float *ptr = &f;

  // Note: insted of writing int if u wrote float then 4 BYTES WILL  be
  //       incremented.

  printf("The value of ptr is: %u\n", ptr);

  // ptr++
  ptr = ptr + 1;

  printf("The value of ptr is: %u\n", ptr );
}


// output:
// The value of ptr is: 6422296
// The value of ptr is: 6422300
