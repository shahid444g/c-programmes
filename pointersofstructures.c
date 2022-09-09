#include <stdio.h>
struct student
{
    int roll;
    int age;
};

int main()
{
    struct student shahid = {43, 17};
    struct student *ptr;
    ptr = &shahid;
    printf("the rollno of shahid is %d\n", ptr->roll);
    printf("the age of shahid is %d \n", ptr->age);
    printf("the adress id %p\n", ptr);
    printf("the adress id %p\n", &shahid);
    return 0;
}