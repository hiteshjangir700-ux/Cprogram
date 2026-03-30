#include<stdio.h>
#include<stdlib.h>


void checkoddeven(int n)
{
    int a = n %2;

    if (a == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}
int main()
{
    system("cls");
    int n= 124;
    checkoddeven(n);
    return 0;

}