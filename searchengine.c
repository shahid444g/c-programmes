#include <stdio.h>

void main() {
  int key;
int j;
int k = 1; // for running of while loop //1==true;
int arrsize;
  int var; // for storing the maximum index value
int tempo; //searching element

int l,r,mid;
  printf("Enter the size of the array \n");
  scanf("%d",&arrsize);
  int arr[arrsize];
  for(int i =0; i<arrsize;i++)
    {
        printf("Enter the %d element of array\n",i+1);
      scanf("%d",&arr[i]);
      var = i;
    }
      for (int i = 1; i < arrsize; i++)
  {
    key = arr[i];
    j = i-1;
    while (j>=0 && arr[j]>key)
    {
        arr[j+1] = arr[j];
        j = j -1;
    }
    arr[j+1] = key;
    
  }
   printf("You have entered\n");
     for(int m = 0; m<arrsize; m++){
     
  printf("%d ",arr[m]);
}
    l = 0;
    r = var;
    mid = (l + r)/2;
    printf("enter the key element\n");
    scanf("%d",&tempo);
  while(k)
   {
   
   
    if (arr[mid] == tempo)
    {
       
        printf("the element is found at %d index\n",mid+1);
        break;
    }
    else if (arr[mid] > tempo)
    {
    r = mid -1;
    }
    else if (arr[mid] < tempo)
    {
    l = mid +1;
    }
    if (l>r)
    {
        printf("element is not there in the list");
        break;
    }
    
    
       mid = (l + r)/2;
    
   }
  
}
  
  
