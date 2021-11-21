// Write a function slice() to slice a string. It should change
// the original string sunch that it is now the sliced string.
// Take m and n as the start and ending position for slice.

#include <stdio.h>
void slice (char *st, int m, int n){
  int i = 0;
  while((m+i)<n){
    st[i] = st[i+m];
    i++;
  }
  st[i] = '\0';
}


int main(){
  char st[] = "Surya";
  slice(st, 1, 4);
  printf("%s", st );
  return 0;
}

// output:
// ury


//-----------------------------------------------------------------



#include <stdio.h>
void slice (char *st, int m, int n){
  int i = 0;
  while((m+i)<n){
    st[i] = st[i+m];
    i++;
  }
  st[i] = '\0';
}


int main(){
  char st[] = "Surya";
  //change-----------change--------------change
  slice(st, 0, 6);
  printf("%s", st );
  return 0;
}


// output:
// Surya
