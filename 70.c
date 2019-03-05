# set7
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,a,b,c;
	printf("\nenter the number:");
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
	a=pow(2,i);
	if(a>n)
	{
		b=i;
		break;
		}
	}
	c=pow(2,b);
	printf("\n%d\n",c);
	return 0;
}
