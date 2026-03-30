#include<stdio.h>
#include<stdlib.h>
int main ()
{
    system("cls");
    int a= 40, b=70, c=80;
    int max = a;

    if (max < b )
     max = b;

     if (max < c)
     max =c;
     printf("%d is the largest num", max);
     return 0;
}