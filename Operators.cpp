#include<iostream>

using namespace std;
// Operands, Operators, Expression
// a+b
// 1) Unary
// 2) Binary 
// 3) Ternary

// Arithmetic
// Realtional
// Logical
// Assignment
// Special
int main()
{
	// Unary Arithmetic Operators
		//++, --
	/*int num1 = 10;
	int num2 = 20;
	
	cout<<"Post Increment: "<<num1++<<endl; //10
	cout<<"Post Increment Result: "<<num1<<endl; //11
	cout<<"Pre Increment: "<<++num1<<endl; //12
	
	cout<<"Post Decrement: "<<num2--<<endl; //20
	cout<<"Post Decrement Result: "<<num2<<endl; //19
	cout<<"Pre Decrement: "<<--num2<<endl; //18 */
	
	// Binary Arithmetic Operators
		// + - * / %
		/*int a = 10, b = 3;
		cout<<"Addition: "<<(a + b)<<endl; //13
		cout<<"Subtraction: "<<(a - b)<<endl; //7
		cout<<"Multiplication: "<<(a * b)<<endl; // 30
		cout<<"Divison: "<<(a / b)<<endl; // 3
		cout<<"Modulus: "<<(a % b)<<endl; // 1 */
		
		// Relational Operators
	/*	int x =5, y=10;
		
		cout<<(x<y)<<endl; //1 (true)
		cout<<(x<=y)<<endl; // 1
		cout<<(x>y)<<endl; // 0 (false)
		cout<<(x>=y)<<endl; // 0
		cout<<(x==y)<<endl; // 0
		cout<<(x!=y)<<endl; // 1 */
		
		// Logical Operators
		//&&, ||, !
	/*	bool a = true, b = false;
		cout<<(a && b)<<endl; //false
		cout<<(a || b)<<endl; //true
		cout<<(!a)<<endl; // false */
		
		// Assignment Operators
		/*int c = 5;
		// c = c + 3; --> c+=3;
		cout<<(c+=3)<<endl; */
		
		//Ternary Operator
		int num = 7;
		string result = (num % 2 == 0) ? "Even" : "Odd"; 
		cout<<"Your Result is : "<<result;
	return 0;
}








