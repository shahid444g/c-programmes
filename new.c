#include<stdio.h>
int main(){
    int avg=0;
    int sum=0;
    int x=0;
    int num[4];
    for(x=0;x<4;x++)
    {
        printf("enter number%d\n",(x+1));
         scamf("%d",&num[x]);
    }
    for(x=0;x<4;x++)
{
    sum=sum+num[x];
}
avg=sum/4;
printf("%d\n",avg);
return 0;
}