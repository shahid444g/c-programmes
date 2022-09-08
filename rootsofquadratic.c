#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f,g;
    printf("ENTER THE COEFFICIENTS a,b,c\n");
    scanf("%d,%d,%d",&a,&b,&c);
    d = b*b - 4*a*c;
    e = sqrt(d);
    f = (-b + e)/2*a;
    g = (-b - e)/2*a;
    printf(" the roots are %d , %d ",f,g);
    return 0;
}