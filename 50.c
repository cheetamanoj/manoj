#include <stdio.h>

int main(void)
{
           int n,sum=0;
          scanf("%d",&n);
          if(n==0)
         return 0;
          while(n!=1)
        {
            if(n%2!=0)
            sum=1;
            n=n/2;
        }
if(sum==0)
printf("yes");
else
printf("no");
  return 0;
}
