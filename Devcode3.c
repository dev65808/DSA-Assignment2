//compute area and perimeter of a rectangle
#include<stdio.h>
int main(){
    int l,b,*len,*bre,area,perimeter;
    printf("Enter the length of a rectangle: ");
    scanf("%d",&l);
    printf("Enter the breadth of a rectangle: ");
    scanf("%d",&b);
    
    len=&l;
    bre=&b;
    area=(*len)*(*bre);
    perimeter=2*((*len)+(*bre));
    printf("Area of the rectangle: %d\n",area);
    printf("Perimeter of the rectangle: %d",perimeter);
    return 0;
}