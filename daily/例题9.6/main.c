#include <stdio.h>
struct Student
{
    int num;
    char name[20];
    char sex;
    int age;
};
struct Student stu[3]= {{10101,"Li lin",'M',18},{10102,"Zhang Fang",'M',19},{10104,"Wang Min",'F',20}};

int main()
{
    struct Student*p;
    printf("No.   Name                 sex  age\n");
    for(p=stu; p<stu+3; p++)
        printf("%5d %-20s %2c %4d\n",p->num,p->name,p->sex,p->age);
    return 0;
}

