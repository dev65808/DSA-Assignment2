//factorial of a number using pointer
#include<stdio.h>
int main(){
    int fact=1,i,n,*ptr;
    printf("Enter a number: ");
    scanf("%d",&n);
    ptr=&n;
    for(i=1;i<=*ptr;i++){
        fact*=i;
    }
    printf("Factorial of %d is %d",n,fact);
}