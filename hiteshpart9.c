#include<stdio.h>
#include<stdlib.h>
void checkevenodd(int n)
{
    if( n & 1)
    {
    printf("odd \n");
    }
    else
    {
        printf("even \n");
    }
}

int main()
{
    system("cls");
    int n = 13;
    checkevenodd(n);
    return 0;

}
// C program to check Even or Odd Using Bitwise and operator.