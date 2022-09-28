#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
  
         srand(time(NULL));
  int s = rand()%100;
  printf("%d\n",s);
    
}
