#include <stdio.h>
void main() {
  int min;

int arrsize;
int temp;
int def;
  printf("enter the size of the array\n");
  scanf("%d",&arrsize);
  int arr[arrsize];
  printf("enter the array elements\n");


  for ( int s = 0; s < arrsize; s++)
  {
    scanf("%d",&arr[s]);
  }
                                      //  0 1 2 
  for (int i = 0; i < arrsize -1; i++) // 3 1 2 // j = 0,1
  {
  
    min = i;
    for(int j = i+1;j<arrsize;j++)
    {
    //   printf(" min = %d \n",min);
    //      // printf("elem a = %d \n",arr[a]);
    //   printf("u = %d \n",u);
        // printf("elem u = %d \n",arr[u]);
      
    if (arr[j]<arr[min]) 
    {
        min = j;
    }
    //  printf(" muted min = %d \n",min);
    }
    // printf("nb %d\n", arr[j]); //3 2
    //  printf("nb 2 %d\n", arr[min]); //1 2
    temp = arr[i]; //3
    arr[i] = arr[min]; //
    arr[min]= temp;
  }
  
for(int m = 0; m<arrsize; m++){
  printf("%d ",arr[m]);
}
}
