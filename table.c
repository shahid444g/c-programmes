#include <stdio.h>
int main()
{ int i=1, num =10,entered;
    printf("Enter the number you want the table\n" );
    scanf("%d",&entered );
    while (i<=num)
    {
    printf("%d*%d=%d\n",entered,i,entered*i );
    i++;
    }
    
    return 0;
}