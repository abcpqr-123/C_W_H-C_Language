#include <stdio.h>
#include <string.h>



  typedef  struct employee{
      int code;
      float salary;
      char name [20];

    }emp;

    void show(struct employee emp1){
      printf("The code of employee is: %d\n", emp1.code);
      printf("The salary of employee is: %f\n", emp1.salary);
      printf("The Name of employee is: %s\n", emp1.name);

           }


int main(){
  //Declaring e1 and ptr
   1emp e1;
   emp *ptr;

  // Pointing ptr to e1
  ptr = &e1;

  // Set the member values for e1
  ptr -> code = 101;
  ptr -> salary = 11.01;
  strcpy(ptr->name, "Surya")
}
