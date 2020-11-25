#include <stdio.h>

/*
& means address of operator
* means value of operator
for defining pointer variable i.e. at the time of variable declaration use * sign before variable name
for doing any calculation you can use value of operator before the variable name
*/

void multiply(int *x, int *y)
{
int z;
z = (*x) * (*y); // add the contents of location pointed by x and y and assign result to z variable
printf("The result of multiplication is: %d",z);
}

int main(void)
{
int a, b;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
multiply(&a,&b);
}
