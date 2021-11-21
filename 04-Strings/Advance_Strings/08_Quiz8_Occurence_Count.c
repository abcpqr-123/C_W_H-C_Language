// write a program to count the occurence of a given character in a string.


#include <stdio.h>
int occurence (char st[], char c){
  char *ptr = st;
  int count = 0;
  while (*ptr!= '\0'){
    if (*ptr == c){
      count++;
    }
      ptr++;
    }
  return count;
}
int main(){
   char st[] = "Suryaaa";
   int count = occurence(st, 'a');
   printf("occurences = %d", count );
  return 0;
}


// output:
// occurences = 3



//----------------------------------------------------------------





#include <stdio.h>
int occurence (char st[], char c){
  char *ptr = st;
  int count = 0;
  while (*ptr!= '\0'){
    if (*ptr == c){
      count++;
    }
      ptr++;
    }
  return count;
}
int main(){
   char st[] = "Suryaaa";
//------------change---------------change
   int count = occurence(st, 'r');
   printf("occurences = %d", count );
  return 0;
}


// output:
// occurences = 1
