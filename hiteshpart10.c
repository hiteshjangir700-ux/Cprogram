#include<stdio.h>
#include<stdlib.h>
void checkevenodd(int num)
{
    int temp = num;
    temp = temp >>1;
    printf("%d \n",temp);

    temp= temp<<1;
    printf("%d \n", temp);

    if (temp==num)
    {
        printf("even\n");
    }
    else{
        printf("odd \n");
    }

}
int main ()
{
    system("cls");
    int  num = 12;
    checkevenodd(num);
    return 0;
}
