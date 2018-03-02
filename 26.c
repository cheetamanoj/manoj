#include <stdio.h>
int main(void) 
{
int n,i,temp,j;
scanf("%d",&n);
int b[n];
	int m;
	m=n/2;
for(i=0;i<n;i++)
	{
	scanf("%d",&b[i]);
}
	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++)
	{
			if(b[j]<b[i])
			{
	temp=b[i];
	b[i]=b[j];
	b[j]=temp;
	}
	}
	}
	printf("%d",b[m]);
	return 0;}
