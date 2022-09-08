#include <stdio.h>
int main()
{
    int tarr[2][3];
    int tarr2[2][3];
    
  printf("enter the array\n");
    for (int i = 0; i < 2; i++)
    for (int j = 0; j < 3; j++)
    
        scanf("%d",&tarr[i][j]);
    
     printf("the first matrix is \n");
    for (int i = 0; i < 2; i++){
      for (int j = 0; j < 3; j++){
    
        printf("%d ",tarr[i][j]);
    }
    printf("\n");
}
  printf("enter the array 2\n");
    for (int i = 0; i < 2; i++)
    for (int j = 0; j < 3; j++)
    
        scanf("%d",&tarr2[i][j]);
    
      printf("the second matrix is \n");
    
    for (int i = 0; i < 2; i++){
      for (int j = 0; j < 3; j++){
    
        printf("%d ",tarr2[i][j]);
    }
    printf("\n");
}
    
    printf("\n");
    printf("the sum of array is \n");

    for (int i = 0; i < 2; i++){
      for (int j = 0; j < 3; j++){
    
        printf("%d ",tarr[i][j] + tarr2[i][j]);
    }
    printf("\n");
}
 return 0;
}