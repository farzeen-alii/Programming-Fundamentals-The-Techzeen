#include<iostream>

using namespace std;
// 5= 5*4*3*2*1
int factorial(int n){
	if(n<=1){ //base case
		return 1;
	}
	else {
		return n * factorial(n - 1); // Recursive call
	}
}

int main(){
	int num;
	cout<<"Enter a positive number: "<<endl;
	cin>>num;
	cout<<"Factorial of "<<num<< " is: "<<factorial(num)<<endl;
	return 0;
}
