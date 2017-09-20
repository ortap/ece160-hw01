/* This code defines a 4 function calculator
   Course: ECE160
   Shailesh Patro
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[]) {
  
  float num1 = atof(argv[2]) ; //GET argv[2] ( use strtof() or atof())
  float num2 = atof(argv[3]) ; //GET argv[3]
  float ans;
  char c = argv[1][0]
    ;
  switch(c) { 
    case('x'):
      ans = num1 * num2;
      break;
    case('/'):
      ans = num1 / num2;
      break;
    case('+'):
      ans = num1 + num2;
      break;
    case('-'):
      ans = num1 - num2;
      break;
    default:
      printf("Invalid input \n");
      break;
  }
  printf("%f\n", ans);
}      
  /* 
  // Compares the first string within argv to the attributes (ex: x,+,-,/) of the 4 functions
  if (strncmp(argv[1], "x", 1) == 0){
    ans = num1 * num2;
  }

  else if (strncmp(argv[1], "/", 1) == 0){
    ans = num1 / num2;
  }

  else if (strncmp(argv[1], "+", 1) == 0){
    ans = num1 + num2;
  }

  else if (strncmp(argv[1], "-", 1) == 0){
    ans = num1 - num2;
  }
  else {
    printf("invalid input \n");
  }
  
  printf("%f \n", ans);
}
*/
