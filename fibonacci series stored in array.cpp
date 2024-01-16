//fibonacci series stored in array
#include<stdio.h>
int main(){
	int i,n;
	printf("enter n : \n");
	scanf("%d", &n);
	int fib[n];
	fib[0] = 0;
	fib[1] = 1;
	
	for(i=0;i<=n;i++){
		fib[i] = fib[i-1] + fib[i-2];
		printf("%d\t",fib[i]);
	}
	return 0;
}
