#include <stdio.h>
#include<string.h>
void main ()
{
  int a;
  char choice[10];
  printf("how many exams passed\n");
  gets(choice);
  if(strcmp(choice,"science and maths") ==0){
    printf("you won 40 rupees");
  }
  else if(strcmp(choice,"science") ==0){
    printf("you won 10 rupees");
  }
  else if((strcmp(choice,"maths") ==0)){
    printf("you won 20 rupees");
  }
  else{
    printf("sorry");
  }
   
}