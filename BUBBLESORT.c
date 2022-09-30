#include<stdio.h>
void main()

{
    int temp;
    int arrsize;
     printf("enter the size of the array\n");
  scanf("%d",&arrsize);
  int arr[arrsize];
  printf("enter the array elements\n");
  for ( int s = 0; s < arrsize; s++)
  {
    scanf("%d",&arr[s]);
  }
 for (int j = 0; j < arrsize; j++)
 {
  for (int i = 0; i < arrsize; i++)
  {
    if (arr[i]>arr[i+1])
    {
        temp = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = temp;

    }
  }
  }
  for(int m = 0; m<arrsize; m++){
  printf("%d ",arr[m]);
}
}
