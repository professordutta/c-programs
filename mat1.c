#include<stdio.h>
void myadd(int *x, int *y)
{
    int z;
    z = *x + *y;
    printf("The addition result is:%d\n",z);
}

void main()
{
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    myadd(&a,&b);
}