#include <stdio.h>
int main(void)
{
	int a, b, c, z;
	printf("Enter First number:");
	scanf("%d",&a);
	printf("Enter Second number:");
	scanf("%d",&b);
	c = a+b;
	z = a*b;
	printf("Addition result is: %d",c);
	printf("\nMultiplication result is: %d",z);
}
