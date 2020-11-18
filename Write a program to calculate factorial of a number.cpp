#include<stdio.h>

int main()
{
int i,n,f=1;
printf("enter a number");
scanf("%d",&n);
for(i=n;i>=1;i--)
f=f*i;
printf("factorial of %d is %d ",n,f);	
}
