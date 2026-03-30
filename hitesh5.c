#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");
    double a,b, product; 
    printf("Enter Two num:");
    scanf("%lf %lf", &a, &b);

    // calculating product

    product = a*b;

    // %.2lf display num up to 2 decimal point
    printf("product =%.2lf", product);

    return 0;
}