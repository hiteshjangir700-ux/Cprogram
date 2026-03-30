#include<stdio.h>
#include<stdlib.h>
void checkNum(int n)
{
    system("cls");
    if( n == 0 )
    {
    printf("zero\n");
    }
    else if(n < 0)
{
    printf("Negative \n");
    
}
else{
    printf("Positive \n");
}
}

int main()
{
    int n= -25;
    checkNum(n);
    return 0;
}