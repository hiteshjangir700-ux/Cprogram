#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
system("cls");
double principle =100, rate =5, time = 2;

double amount= principle* pow((1+rate/100),time);
double CI=amount-principle;
printf("Compound interest is : %lf",CI);
return 0;
}