#include<iostream>

using namespace std;

// DRY --> Do not Repeat Yourself

// Function Prototype (Declaration)
int multiplyValue(int num1, int num2);

// Function Definition
/*void greet(){
	cout<<"Good Morning!!";
}*/

int main(){
	//greet();
	//greet();
	//greet();
	int a,b;
	cout<<"Enter the first value: "<<endl;
	cin>>a;
	cout<<"Enter the second value: "<<endl;
	cin>>b;
	
	cout<<"The Product is: "<<multiplyValue(a,b)<<endl;
	return 0;
}
// Function Definition
/*void greet(){
	cout<<"Good Morning!!";
}*/

int multiplyValue(int num1, int num2){
	return num1*num2;
}

//arguments, paramateres


