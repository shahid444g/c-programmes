#include<stdio.h>
void main(){
int arrsize;
int j;
int key;
  printf("enter the size of the array\n");
  scanf("%d",&arrsize);
  int arr[arrsize];
  printf("enter the array elements\n");
  for ( int s = 0; s < arrsize; s++)
  {
    scanf("%d",&arr[s]);
  }
    for (int i = 1; i < arrsize; i++)
    { //33 22 1 // 22 33 1
        key = arr[i]; //22 1
        j = i-1; //33 j =0 j =1
        while (j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j-1; //-1 0
        }
        arr[j+1] = key; //0 1


    }
    for(int m = 0; m<arrsize; m++){
  printf("%d ",arr[m]);
}
}
