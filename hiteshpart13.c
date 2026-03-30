#include<stdio.h>
#include<stdlib.h>
int main ()
{
    system("cls");
    int i , s=0;
    int n= 10;

    for (i = 0; i<=n;i++)
    {
        s= s+i;
    }
    printf("sum =%d", s);
    return 0;
}