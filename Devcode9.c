//search an element using function and pointer
#include<stdio.h>
int search(int [],int,int);
int main(){
    int a[10],i,n,srch,val;
    printf("Enter the range: ");
    scanf("%d",&n);
    printf("Enter elements to the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&val);
    srch=search(a,n,val);
    printf("Element found at %d position",srch);
    return 0;
}
int search(int a[],int n,int val){
    int i,*ptr;
    for(i=0;i<n;i++){
        ptr=&a[i];
        if(*ptr==val){
            break;
        }
    }
    return (i);

}