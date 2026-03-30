#include<stdio.h>
#include<stdlib.h>
 int factorial( int n)
 {
    if( n==1)
    {
        return 1;
    }
    return n * factorial(n-1);
 }

 int main ()
 {
    system("cls");
    int  num= 8;
    printf("factorial of %d is %d", num, factorial(num));
    return 0;
 }
