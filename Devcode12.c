//dynamically allocate an array of n integers and search an element using linear search
#include<stdio.h>
#include<stdlib.h>
void main(){
    int *ptr,n,i,val;
    printf("Enter range of the array: ");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    printf("Enter elements to the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    printf("Enter the element you want to search: ");
    scanf("%d",&val);
    for(i=0;i<n;i++){
        if(ptr[i]==val){
            break;
        }
    }
    printf("Element found at %d position",i);
}   