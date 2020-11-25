#include <stdio.h>
void sum(int *x, int *y)
{
	int z;
	z = *x + *y;
	printf("The addition result is:%d",z);
}

int main(void)
{
	int a, b;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	sum(&a,&b); // function call by reference
}
