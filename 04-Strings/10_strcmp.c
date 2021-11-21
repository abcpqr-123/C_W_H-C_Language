//strcmp is used to compare 2 strings.
//it returns 0 if the Strings are eqeal.

//REVISIT THE EXPLINATON ONCE AGAIN
//NOT CLEAR YET
#include <stdio.h>
#include <string.h>

int main(){
     char st1[45] = "Hello";
     char *st2 = "Harry";
     int val = strcmp(st1, st2);
     printf("Now the val is %d", val);
  return 0;
}
