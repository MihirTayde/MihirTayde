//subtract the product and sum digits of an integer
#include<iostream>
using namespace std;
int main(){
	int n,sum=0,rem,product=1;
	cout<<"Enter the Integer: ";
	cin>> n;
	
	do{
		rem = n%10;
		n = n/10;
		sum += rem;
		product *= rem;
	}while(n>0);
	cout<<"Product of integer = "<<product<<endl;
	cout<<"Sum of integer = "<< sum<<endl;
	cout<<"Ans = "<<product-sum;
}
