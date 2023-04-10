//print value and address of a variable
#include<stdio.h>
int main(){
    int a;
    printf("Enter the value of a variable: ");
    scanf("%d",&a);
    printf("Value of the variable: %d\n",a);
    printf("Address of the variable: %p",&a);
    return 0;
}