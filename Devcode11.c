//dynamically allocate an array of n integers and sort it in ascending order
#include<stdio.h>
#include<stdlib.h>
void main(){
    int *ptr,i,j,temp,n;
    printf("Enter the range of the array: ");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    printf("Enter elements to the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    printf("Array before sorted in ascending order: ");
    for(i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
    printf("\nArray after sorted in ascending order: ");
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(ptr[j]>ptr[j+1]){
                temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
}