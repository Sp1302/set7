# set7

#include <stdio.h>
int main() 
{
	int n1,n2,sum;
	printf("\nenter the number1:");
	scanf("%d",&n1);
	printf("\nenter the number2:");
	scanf("%d\n",&n2);
	sum=n1+n2;
	if(sum%2==0)
	{
		printf("\neven");
	}
	else
	{
		printf("\nodd");
	}
	return 0;
}
