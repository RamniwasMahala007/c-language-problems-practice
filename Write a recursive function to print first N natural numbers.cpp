#include<stdio.h>
void print(int N);
main(){
	print(10);
}
void print(int N){
	if(N>=1){
	
	print(N-1);
	printf("%d ",N);
}
}

