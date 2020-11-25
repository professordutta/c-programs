#include <stdio.h>
int main(void)
{
	int i, j, sum, k;
	int matrix1[2][2], matrix2[2][2], matrix3[2][2];
	printf("Enter the elements of first matrix:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&matrix1[i][j]);
		}
	}
	
	printf("The entered matrix is: \n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d \t",matrix1[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter the elements of second matrix:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&matrix2[i][j]);
		}
	}
	
	printf("The entered matrix is: \n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d \t",matrix2[i][j]);
		}
		printf("\n");
	}
	
	// Addition of matrices
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
	
	printf("The addition of matrix result is: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d \t",matrix3[i][j]);
		}
		printf("\n");
	}
	
	// subtraction of matrices
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
		}
	}
	
	printf("The subtraction of matrix result is: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d \t",matrix3[i][j]);
		}
		printf("\n");
	}
	
	// multiplication of matrices
	sum = 0;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				sum = sum + matrix1[i][k]*matrix2[k][j];
			}
			matrix3[i][j] = sum;
			sum = 0;
		}
	}
	
	// now print the result of matrix multipication
	printf("The result of matrix multiplication is: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d \t",matrix3[i][j]);
		}
		printf("\n");
	}
	
}
