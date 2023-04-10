//add elements of an array using function and pointer (formal argument must be an array)
#include<stdio.h>
int add(int [],int);
int main(){
    int a[10],i,n,sum;
    printf("Enter the range: ");
    scanf("%d",&n);
    printf("Enter the elements to the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sum=add(a,n);
    printf("Sum of all the array elements: %d",sum);
    return 0;
}
int add(int a[],int n){
    int i,sum=0,*ptr;
    for(i=0;i<n;i++){
        ptr=&a[i];
        sum+=*ptr;
    }
    return (sum);
}