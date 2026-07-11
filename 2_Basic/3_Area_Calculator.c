#include<stdio.h>
int main() {
    int len, br;

    printf("Enter length of a rectangle: ");
    scanf("%d", &len);
    
    printf("Enter breadth of a rectangle: ");
    scanf("%d", &br);

    printf("Area of the Rectangle is: %d", len*br);

    return 0;

}