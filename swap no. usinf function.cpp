/* Write a program in C to swap two numbers using a function.
Test Data :
Input 1st number : 2
Input 2nd number : 4 */

#include<stdio.h>
void swap(int a, int b);
int main(){
	int x,y;
	printf("Enter 1st no. = ");
	scanf("%d", &x);
	printf("Enter 2nd no. = ");
	scanf("%d", &y);
	printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(x, y); // Passing values to the swap function
    
	return 0;
}
void swap(int a, int b){
	int c = a+b;
	b = c-b;
	a = c-b;
	printf("After swapping: x = %d, y = %d\n", a, b);
}
