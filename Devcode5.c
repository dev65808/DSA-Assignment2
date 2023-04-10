//add two numbers using pointer
#include<stdio.h>
int main(){
    int a,b,*ptr1,*ptr2,sum;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    ptr1=&a;
    ptr2=&b;
    sum=(*ptr1)+(*ptr2);
    printf("Sum of two numbers are: %d",sum);
}