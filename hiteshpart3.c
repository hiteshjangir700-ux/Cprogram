#include<stdio.h>
#include<stdlib.h>
int main ()
{
    system("cls");
    int a=5, b=10;

    a= a+b;
    b= a-b;
    a= a-b;
    printf("a=%d, b=%d \n", a, b);
    return 0;

}