#include <stdio.h>

void main(void) {
  int num,fixed1=0,fixed2=1; int sum =fixed1+ fixed2;
printf("enter the no of series\n");
  scanf("%d",&num);
  if(num==1){
    printf("%d",fixed1);
  }
  else if(num==2){
    printf("%d %d",fixed1,fixed2);
  }
  else{
    printf("%d %d %d ",fixed1,fixed2,sum);
    for(int i =3; i<num;i++){
      fixed1 = fixed2;
      fixed2 = sum;
      sum = fixed1 + fixed2;
      printf("%d ",sum);
    }
    
}}
