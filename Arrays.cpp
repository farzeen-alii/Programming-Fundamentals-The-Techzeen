#include<iostream>

using namespace std;

int main(){
	//int marks[5]; //array declare
	//marks[5] = {70,60,50,40,20}; //array initilization
	//int marks[5] = {10,20,30,40,50}; // declaration + initilization
	//cout<<marks[2];
	
	/*for(int i = 0; i < 5; i++)
	{
		cout<<"The values are: "<<marks[i]<<endl;
	}*/
	
	int num[6];
	cout<<"Enter any 6 values: "<<endl;
	
	for(int i = 0; i < 6; i++){
		cin>>num[i];
	}
	
	cout<<"The values are: "<<endl;
	for(int i = 0; i < 6; i++){
		cout<<num[i]<<endl;
	}
	
	
	return 0;
}
