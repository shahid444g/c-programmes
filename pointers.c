#include <stdio.h>
int main()
{
    int a = 5;
    int * ptr = &a;
    printf("the value of a is %d\n",a);
    printf("the value of a is %d\n",*ptr);
    printf("the adress of a is %p\n",&a);
    printf("the adress of a is %p\n",ptr);
    return 0;
}