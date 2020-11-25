// matrix addition program but a general one
// you can enter any matrix and then you can perform addition
//provided the condition for matrix addition is met
// mxn pxq m=p and n = q then matrix addition is possible

#include <stdio.h>

int main(void)
{
	int a[4][4],b[4][4],c[4][4],i,j;
	int m,n,p,q;
	printf("Enter the number of rows in matrix 1:");
	scanf("%d",&m);
	printf("Enter the number of columns in matrix 1:");
	scanf("%d",&n);
	printf("The dimension of matrix 1 is:%d x %d\n",m,n);
	
	printf("Enter the number of rows in matrix 2:");
	scanf("%d",&p);
	printf("Enter the number of columns in matrix 2:");
	scanf("%d",&q);
	printf("The dimension of matrix 2 is:%d x %d\n",p,q);
	
	//logic to check whether matrix addition is possible or not?
	
	if((m==p)&&(n==q))
	{
		printf("Matrix addition is possible\n");
		//get the elements of matrix 1 
		printf("Enter the elements of matrix 1:");
		for(i=0;i<m;i++)  // for rows
		{
			for(j=0;j<n;j++) // for columns
			{
				scanf("%d",&a[i][j]);
			}
		}
		
		//print the matrix 1
		printf("The matrix 1 entered by the user is:\n");
		for(i=0;i<m;i++)  // for rows
		{
			for(j=0;j<n;j++) // for columns
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n"); // new line character for row change
		}
		
		
		//get the elements of matrix 2 
		printf("Enter the elements of matrix 2:");
		for(i=0;i<p;i++)  // for rows
		{
			for(j=0;j<q;j++) // for columns
			{
				scanf("%d",&b[i][j]);
			}
		}
		
		//print matrix 2
		printf("The matrix 2 entered by the user is:\n");
		for(i=0;i<p;i++)  // for rows
		{
			for(j=0;j<q;j++) // for columns
			{
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		}
		
		// logic for addition needs to be designed here
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				c[i][j] = a[i][j]+b[i][j];
			}
		}
		//print the result here
		
		printf("The addition of the two matrices entered by the user is:\n");
		for(i=0;i<m;i++)  // for rows
		{
			for(j=0;j<n;j++) // for columns
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
	
	else
	{
		printf("Matrix addition is not possible");
	}
}
