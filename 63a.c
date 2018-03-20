
#include <stdio.h>

#include<string.h>

int main(void)

{
	int i,n,count=1;
	char  b[10];
	gets(b);
	n=strlen(b);
	for(i=0;i<n;i++)
	{
		if(b[i]==' ')
		{
			count++;
		}
	}
	printf("%d",count);
}
