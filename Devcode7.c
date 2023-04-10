//take the input and reverse the elements of array using function and pointer
#include<stdio.h>
void rev(int [],int);
int main(){
    int a[10],i,n;
    printf("Enter the range: ");
    scanf("%d",&n);
    printf("Enter the elements to the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Reverse of the array is:\n");
    rev(a,n);
    return 0;
}
void rev(int a[],int n){
    int i,*ptr;
    for(i=n-1;i>=0;i--){
        ptr=&a[i];
        printf("%d ",*ptr);
    }
}