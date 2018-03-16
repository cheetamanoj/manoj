#include<stdio.h>
#include<stdio.h>
int main()
{
	int i;
	char b[100],a_count=0,n_count=0;
	gets(s);
	for(i=0;a[i]!='\0';i++)
	{
		if((b[i]>='a' && b[i]<='z') || (b[i]>='A' && b[i]<='Z'))
		{
			a_count++;
		}
		if(b[i]>='0' && b[i]<='9')
		{
			n_count++;
		}
	}
	if((a_count && n_count)>0)
	printf("yes");
	else
	printf("no");
}
