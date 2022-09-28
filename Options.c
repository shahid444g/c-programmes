#include<stdio.h>
#include<string.h>
void main(){
    int x;
    int q;
    int g;
    int a;
    int y;
    int p;
    char name[20];
    printf("Welcome to universal facts! enter the username to continue!\n");
    scanf("%s",&name);
    if(strcmp(name,"shoaib")==0){
        printf("welcome to facts new\n");

    }
else{
    q =1;
    printf("wrong username\n");
    goto ecc;

}

printf("choose one option\n1.animals\n2.coding\n");
scanf("%d",&a);
if (a==1)
{
   printf("you have selected animals select a sub category\n1.lion\n2.tiger\n3.giraffe\n4.snake\n");
   y=1;
}

if (a==2)
{
   printf("you have selected coding select a sub category\n1.c/c++\n2.java\n3.python\n4.django\n");
    x =1;

}
if(x==1){
scanf("%d",&g);
if (g==1)
{
    printf("c is best");
}
if (g==2)
{
    printf("java is best");
}
if (g==3)
{
    printf("python is best");
}
if (g==4)
{
    printf("django is best");
}

}

if(y==1){
scanf("%d",&p);
if (p==1)
{
    printf("lion is best");
}
if (p==2)
{
    printf("tiger is best");
}
if (p==3)
{
    printf("giraffe is best");
}
if (p==4)
{
    printf("snake is best");
}

}

ecc:
if (q==1)
{

printf("exited"); 
}


}
