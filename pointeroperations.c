#include <stdio.h>
int main()
{
    int a = 5;
    int * ptr = &a;
    printf("the value of a is %d\n",a+1);
    printf("the incremented value of a is %d\n",*ptr+1);
    printf("the value of a is %d\n",*ptr);
    printf("the adress incremented of a is %d\n",&a+1);
    printf("the adress of a is %d\n",&a);
     printf("the adress of a is %p\n",&a);
    printf("the adress incremented of a is %d\n",ptr+1);
    printf("the adress of a is %d\n",ptr);
   
    return 0;
}