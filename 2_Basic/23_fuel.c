#include<stdio.h>
int main() {
    int n, cost;
    printf("Enter the volume of petrol: ");
    scanf("%d", &n);
    
    if(0<n && n<=10) {
        cost= 110*n;
    }
    else if(n<=20) {
        cost= n*105;
    }
    else
    {
        cost= n*100;
    }
    
    printf("Total cost: %d", cost);

    }
