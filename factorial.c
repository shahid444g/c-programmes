#include <stdio.h>
int main()
{ 
    int sum = 1;
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
       sum = sum *i;
       
    }
    printf(" the factorial is %d",sum);
    return 0;
}