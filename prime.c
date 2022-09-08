#include <stdio.h>
void main()
{
  int prime,z=1;
  printf("Enter a number\n");
  scanf("%d",&prime);
  for (int i = 1; i <=prime; i++)
  {
    if(prime%i==0){
      z++;
    }
  }
  if (z==3)
  {
    printf("THE NUMBER IS PRIME");
  }
  else{
    printf("the number is not prime");
  }
  
  
}