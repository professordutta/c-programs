#include <stdio.h>
int main(void)
{
int a;
printf("Enter the number:");
scanf("%d",&a);
printf("The number entered by teh user is: %d",a);
printf("\nThe address where the entered value is stored is:%p",&a);
}
