#include<iostream>

using namespace std;

int main(){
	int size;
	int* ptr;
	
	cout<<"Enter Number of Values you want to store in an array: "<<endl;
	cin>>size;
	
	ptr = new int[size];
	cout<<"Enter the values: "<<endl;
	for(int i = 0; i < size; i++){
		cin>>ptr[i];
	}
	cout<<"Values in the Array are: "<<endl;
	for(int i = 0; i < size; i++){
		cout<<ptr[i]<<endl;
	}
	delete []ptr;
	cout<<"Values in the Array are after deletion: "<<endl;
	for(int i = 0; i < size; i++){
		cout<<ptr[i]<<endl;
	}
	return 0;
}
