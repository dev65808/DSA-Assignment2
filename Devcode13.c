/*stores following information of employees name(fname,mname,lname),empno,doj(dd mm yyy),salary and perform
1. display info of employees whose salary>25000
2. display info of employees in ascending order of their salary
3. display info of employees whose lname is mishra*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Employee{
    char *name;
    int empno,d,m,y,salary;
};
int main()
{
    int i;
    printf("Enter the name of the employee:");
    struct Employee s;
    s.name=(int *)malloc(3*100);
    for(i=0;i<3;i++)
        scanf("%c",s.name);
    printf("%s",s.name);
}