//check if the digits are repeated or not
#include<stdio.h>
int main(){
	int seen[10] ={0};
	int N;
	printf("enter number : %d\n");
	scanf("%d", &N);
	int rem;
		while(N>0){
		rem = N%10;
		if(seen [rem] == 1)
		break;
		seen [rem] = 0;
		N = N/10;
	}
	if (N>0)
	printf("Yes");
	else printf("No");
	return 0;
}