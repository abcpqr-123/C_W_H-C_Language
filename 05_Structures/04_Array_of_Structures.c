// In file no-03, there were limited employees --> e1,e2,e3
// If u have more employees then  u can create an array.
// like --->  employee facebook[100]


#include <stdio.h>
#include <string.h>


  struct employee{
    int code;
    float salary;
    char name[20];
  };

  int main(){
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[0].salary = 100.45;
    strcpy (facebook[0].name, "abc");
    printf("\n" );

    facebook[1].code = 200;
    facebook[1].salary = 200.45;
    strcpy (facebook[1].name, "pqr");
    printf("\n" );

    facebook[2].code = 300;
    facebook[2].salary = 300.45;
    strcpy (facebook[2].name, "lmn");
    printf("\n" );
    printf("Done");

  return 0;
}


// output:
//
// Done
// Press any key to continue . . .
