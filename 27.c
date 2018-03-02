#include<stdio.h>
main()
{
int b[30],i,j,n,m;
printf("Enter the number");
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
for(j=i+1;j<=n;j++)
{
if(b[i]>b[j])
{
temp=b[j];
b[j]=b[j+1]
b[j+1]=temp;
 }
  }
  }
  if(n%2==0)

 {
 m=n/2;
  printf("The sorted array is...%d",b[m]);
}
}
