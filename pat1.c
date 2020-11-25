#include <stdio.h>

int main(void)
{
int i,j,m;
printf("Enter the value of m:");
scanf("%d",&m);
for(i=0;i<m;i++)
{
	for(j=0;j<=i;j++)
	{
		printf("*");
	}
	printf("\n");
}
}
