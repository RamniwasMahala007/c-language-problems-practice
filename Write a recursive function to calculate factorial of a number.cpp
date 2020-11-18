#include<stdio.h>
#include<conio.h>
long fact(int n)
{
	if(n>0)
	return(n*fact(n-1));
	else 
	return(1);
}
main(){
	printf("factorial of 6 is %d",fact(6));
}

