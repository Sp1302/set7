# set7
#include <stdio.h>
void main() 
{
    int n,i,count=0;
    scanf("%d\n",&n);
    for(i=2;i<=(n/2);i++)
   {
    if(n%i==0)
    count++;
   }
    if(count==0)
    {
     printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
	getch();
}
