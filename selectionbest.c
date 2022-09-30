#include<stdio.h>
void main(){
    int temp;
 int temp2;
 int arrsize;
  printf("enter the size of the array\n");
  scanf("%d",&arrsize);
  int arr[arrsize];
  printf("enter the array elements\n");
  for ( int s = 0; s < arrsize; s++)
  {
    scanf("%d",&arr[s]);
  }
  for (int i = 0; i < arrsize-1; i++)
  {
    temp = i;
    for (int j =i+1; j < arrsize; j++)
    {
        if (arr[temp]>arr[j])
        {
            temp = j;
        }
        
    }
 temp2 = arr[i];
 arr[i] = arr[temp];
 arr[temp] = temp2;   
  }
  
  for(int m = 0; m<arrsize; m++){
  printf("%d ",arr[m]);
}


}
  
