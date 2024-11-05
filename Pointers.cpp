#include<iostream>

using namespace std;

int main(){
	int age = 20;
	int* ptr = &age;
	
	cout<<"Age: "<<age<<endl; //20
	cout<<"Address of Age: "<<&age<<endl; //Address Age
	cout<<"Pointer: "<<ptr<<endl; //Address age
	cout<<"Dereference Operator: "<<*ptr<<endl; //20
	
	return 0;
}
