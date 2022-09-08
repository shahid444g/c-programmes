#include <stdio.h>
struct student
{
    int rollno;
    int age;
    char gender;
} shahid;
struct student shahid = {43,17,'M'};
int main()
{
    printf(" student roll no is %d age is %d  he is %c",shahid.rollno,shahid.age,shahid.gender);
    return 0;
}