#include<iostream>

using namespace std;

enum weekDays {
	Sunday,
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday
};

int main(){
	enum weekDays today;
	
	today = Wednesday;
	
	cout<<"Day: "<<today<<endl;
	
	return 0;
}
