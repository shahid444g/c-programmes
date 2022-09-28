#include <stdio.h>

void main() {
int j = 1; // for running of while loop //1==true;
int arrsize;
  int var; // for storing the maximum index value
int key; //searching element

int l,r,mid;
  printf("Enter the size of the array \n");
  scanf("%d",&arrsize);
  int arr[arrsize];
  for(int i =0; i<arrsize;i++)
    {
        printf("Enter the %d element of array  in ascending order\n",i+1);
      scanf("%d",&arr[i]);
      var = i;
    }
    l = 0;
    r = var;
    mid = (l + r)/2;
    printf("enter the key element\n");
    scanf("%d",&key);
  while(j)
   {
   
   
    if (arr[mid] == key)
    {
       
        printf("the element is found at %d index\n",mid+1);
        break;
    }
    else if (arr[mid] > key)
    {
    r = mid -1;
    }
    else if (arr[mid] < key)
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
  