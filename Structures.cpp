#include<iostream>

using namespace std;

struct employee {
	int sno;
	string empName;
	float salary;
};

int main(){
	struct employee ep;
	ep.sno = 1;
	ep.empName = "Farzeen";
	ep.salary = 100.0;
	
	cout<<"S.No: "<<ep.sno<<endl;
	cout<<"Employee Name: "<<ep.empName<<endl;
	cout<<"Employee Salary: "<<ep.salary<<endl;
	
	return 0;
}
