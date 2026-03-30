#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");
    int array[7] = {3,4,5,6,7,8};
    int n= 5;
    int position = 2;
    int value = 9;

    insert(array, &n, position, value);
    for (int i=0;i<n; i++) printf("%d", arr[i]);
}