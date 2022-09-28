#include <stdio.h>

void main(void) {
   int flag =0; int s;
  int key;
  int arrsize;
  

  printf("Enter the size of the array \n");
  scanf("%d",&arrsize);
  int arr[arrsize];

  for(int i =0; i<arrsize;i++)
    {
        printf("Enter the %d element of array\n",i+1);
      scanf("%d",&arr[i]);
  }
  printf("enter searching element \n");
    scanf("%d",&key);
    for(int j= 0; j<arrsize; j++){
  
      if (key ==arr[j]){
        s = j;
      flag = 1;
        break;
        
      }
s = j;
      }
if (flag ==1){   

  printf("The element found at %d position\n",s+1);
  }
 else{
        printf("the element is not in the array\n");
}
      
  
  }