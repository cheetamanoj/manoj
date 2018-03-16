#include <stdio.h>

int main(void) 
{
	char b[10];
	scanf("%s",b);
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%c",b[i]);
	}
	return 0;
}
