#include<stdio.h>

int main(){
	int x,count=0;
	printf("enter the number");
	scanf("%d",&x);
	while(x!=0){
	
	x=x/10;
	count++;
	}
	printf("number of digits  %d",count);
}

