//dynamically allocate an array of n integers and display its elements and its sum
#include<stdio.h>
#include<stdlib.h>
void main(){
    int *ptr,i,n,sum=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    printf("Enter elements to the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    printf("Array elements are: ");
    for(i=0;i<n;i++){
        printf("%d ",ptr[i]);
        sum+=ptr[i];
    }
    printf("\nSum of the array elements: %d",sum);
}