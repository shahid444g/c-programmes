#include <stdio.h>
int main()
{
    int year;
    printf("enter the year you want to check for leap year \n");
    scanf("%d", &year);
    if (year%4==0)
    {
    printf("yes its a leap year ");
    }
    else{
        printf("no its not a leap year");
    }
    return 0;
}