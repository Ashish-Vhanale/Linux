//Program to demostrate startup and exit using #pragma.
#include<stdio.h>
void fun();
void sun() ;

#pragma startup fun

#pragma exit sun

void fun()
{
printf("\nIn fun");
}

void sun()
{
printf("\nIn sun");
}


int main()
{
printf("\nIn main\n");
return 0;
}

