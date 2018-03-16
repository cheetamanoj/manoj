#include<stdio.h>
int main()
{
	int n,i=0,a=0,sum=0;
	printf("enter the number ");
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		n=n/10;
		sum=sum+a;
	}
	
	
	printf("%d ",sum);
}
