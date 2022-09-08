#include <stdio.h>
int main()
{
    char a[10];
    FILE * ptr;
    ptr = fopen("filescan1.txt","r");
    fscanf(ptr,"%s",&a);
    printf("%s",a);
    return 0;
}