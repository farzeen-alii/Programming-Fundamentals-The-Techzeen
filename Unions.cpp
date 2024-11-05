#include<iostream>

using namespace std;

union dataInfo {
	int sno;
	char letter;
	float salary;
};

int main()
{
	union dataInfo di;
	di.sno = 1;
	cout<<"Sno: "<<di.sno<<endl;
	di.letter = 'f';
	cout<<"Letter: "<<di.letter<<endl;
	di.salary = 49.2;
	cout<<"Salary: "<<di.salary<<endl;
	return 0;
}
