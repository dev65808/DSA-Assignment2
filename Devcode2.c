//print value and address of a variable using pointer
#include<stdio.h>
int main(){
    int a,*ptr;
    printf("Enter the value of a variable: ");
    scanf("%d",&a);
    ptr=&a;
    printf("Value of the variabble: %d\n",a);
    printf("Address of the variable: %p",ptr);
    return 0;
}