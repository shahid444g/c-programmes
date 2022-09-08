#include <stdio.h>
int shahid(int num);

int main()
{
    int i,num,flag=0;
    printf("enter the number you want the prime sum\n");
    scanf("%d",&num);
    for ( i = 2; i <=num/2; ++i)
    {
        if (shahid(i)==1)
        {
            if (shahid(num-i)==1)
            {
                printf("the sum is %d = %d + %d\n",num,i,num-i);
                flag = 1;
            }
            
        }
        if (flag =0)
        {
            printf("this cannot be expressed as a sum of prime numbers");
        }
        
    }
    
    
    return 0;
}

int shahid(int num){
    int i,prime= 1;
    if (num == 0 || num == 1)
    {
        printf("this is not a prime number");
    }
    for(i=2;i<=num/2;++i)
    {
     if (num%i==0)
     {
        prime = 0;
     }
     return prime;
    }
    
    
}