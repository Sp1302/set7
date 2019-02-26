# set7
#include <stdio.h>
#include<string.h>
void main() 
{
	char a[100];
	int n,i,num,count=0;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	    if(a[i]=='0'||a[i]=='1')
	    {   
	    count++;
	    }
	    else
	    {
	    printf("no\n");
	    break;
	    }
	}
	if(n==count)
	{
	printf("yes\n");
	}
	getch();
}
