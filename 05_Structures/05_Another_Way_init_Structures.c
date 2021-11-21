
#include <stdio.h>
#include <string.h>

struct employee{
  int code;
  float salary;
  char name[20];
};


int main(){
  struct employee Surya = {100, 34.23, "Surya"};

  printf("Code is: %d \n", Surya.code);
  printf("Salary is: %f \n", Surya.salary);
  printf("Name is: %s \n", Surya.name);

  return 0;

}


//   output:
//   Code is: 100
//   Salary is: 34.230000
//   Name is: Surya
