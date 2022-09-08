#include <stdio.h>
int main()
{int nu,sum=0;
    printf("enter the number of sum you want");
    scanf("%d",&nu);
    for (int i = 0; i <=nu; i++)

    {
        sum = sum +i;
    }
    printf("%d",sum);
    return 0;
}