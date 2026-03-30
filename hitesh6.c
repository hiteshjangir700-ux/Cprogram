#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");
    int  a=5, b=10, temperature;
    temperature=a;
    a=b;
    b=temperature;

    printf("a=%d,b=%d \n", a,b);
    return 0;
}