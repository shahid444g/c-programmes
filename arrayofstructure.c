#include <stdio.h>
    
struct student
{
    int rollno;
    int age;
    char gender[10];
};
struct student students[3];
int main()
{
for (int i = 0; i < 3; i++)
{
    printf("enter the rollno of %d student\n",i);
    scanf("%d",&students[i].rollno);
    printf("enter the age of %d student\n",i);
    scanf("%d",&students[i].age);
    printf("enter the gender of %d student\n",i);
    scanf("%s",&students[i].gender);

}

for (int i = 0; i < 3; i++)
{
    printf("the rollno of %d student is %d\n",i,students[i].rollno);
    printf("the age of %d student is %d\n",i,students[i].age);
    printf("the gender of %d student is %s\n",i,students[i].gender);
   
}

    return 0;
}