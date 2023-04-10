//take input of element of an array and display the elements and its address
#include<stdio.h>
int main(){
    int a[10],n,i,*ptr;
    printf("Enter the range of the array: ");
    scanf("%d",&n);
    printf("Enter the elements to the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Array elements and it's address are: ");
    for(i=0;i<n;i++){
        ptr=&a[i];
        printf("\n%d\n",a[i]);
        printf("\n%p\n",ptr);
    }
    return 0;
}