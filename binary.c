#include<stdio.h>
int main(){
    int divident ,divisor, remainder,quotient;
    printf("enter the divident");
    scanf("%d",&divident);
    printf("enter the divisor");
    scanf("%d",&divisor);
    quotient=divident/divisor;
    remainder=divident%divisor;
    printf("%d\n",quotient);
    printf("%d\n",remainder);
    return 0;

}