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
  // To
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

    
  if (argc == 1) {
    printf("Not enough arguments!\n");
    return(-1); // nonzero exit code indicates problem
  }
  int cmd = atoi(argv[1]);
  switch (cmd) {
  case 0:
    printf("zero\n");
    break;
  case 1:
    printf("one\n");
    break;
  default:
    printf("Unrecognized arg\n");
  }
  return 0;
}
*/
