#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int  arr[5]= {6,3,7,8,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int *ptr= &arr[0];
    for (int i=0; i<5; i++)
    printf("%d \t", ptr[i]);
    return 0;

}