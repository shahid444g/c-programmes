#include <stdio.h>
int main()
{
    FILE * ptr;
    ptr = fopen("newfile.txt","w");
    fprintf(ptr,"%d",45);
    fclose(ptr);
    return 0;
}