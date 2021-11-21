// write a program to store the details of 3 employees from user data.
// Use the structure declared above!


#include <stdio.h>
#include <string.h>

struct employee{
  int code;
  float salary;
  char name[20];
};

int main(){
struct employee e1,e2,e3;
printf("Enter the value for code of e1: ");
scanf("%d", &e1.code);
printf("Enter the value for salary of e1: ");
scanf("%f", &e1.salary);
printf("Enter the value for name of e1: ");
scanf("%s", e1.name);
printf("\n");


printf("Enter the value for code of e2: ");
scanf("%d", &e2.code);
printf("Enter the value for salary of e2: ");
scanf("%f", &e2.salary);
printf("Enter the value for name of e2: ");
scanf("%s", e2.name);
printf("\n");


printf("Enter the value for code of e3: ");
scanf("%d", &e3.code);
printf("Enter the value for salary of e3: ");
scanf("%f", &e3.salary);
printf("Enter the value for name of e3: ");
scanf("%s", e3.name);
printf("\n");

return 0;

}


//output:
// Enter the value for code of e1: 1
// Enter the value for salary of e1: 1.1
// Enter the value for name of e1: abc
//
// Enter the value for code of e2: 2
// Enter the value for salary of e2: 2.2
// Enter the value for name of e2: pqr
//
// Enter the value for code of e3: 3
// Enter the value for salary of e3: 3.3
// Enter the value for name of e3: lmn
