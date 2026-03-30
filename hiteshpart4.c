// use a pointer

#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int var =10;
    int *ptr= &var;
     printf (" address : %d \n", ptr);
     printf("value of %d", *ptr );
     return 0;

}