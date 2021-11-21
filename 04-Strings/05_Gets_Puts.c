


#include <stdio.h>

int main(){
  char s[34];
  printf("Enter your name: \n");
  // Note: If U want to print name with space then u have to use ==> gets(s)
  gets(s);

    printf("Your name is: %s\n", s);

  return 0;
}


// Enter your name:
// Surya Gaonkar
// Your name is: Surya Gaonkar



//---------------------------------------------------------

#include <stdio.h>

int main(){
  char s[34];
  printf("Enter your name: \n");
  // Note: If U want to print name with space then u have to use ==> gets(s)
  gets(s);
  // Note: Put(s) => prints the string
  //                 places the cusor on the next line
  puts(s);
  // printf("Your name is: %s\n", s);

  return 0;
}

// output:
// Enter your name:
// I am Surya. I am living in Dwarka, Delhi.
// I am Surya. I am living in Dwarka, Delhi.
