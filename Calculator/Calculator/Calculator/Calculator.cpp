#include <iostream>
#include <cmath>
using namespace std;

string again;

int main() {
	// define variables
	string operation;
	double num1, num2;
	

	do {

		// get user input

		cout << "Enter first number :" << endl;
		cin >> num1;

		cout << "Enter second Number :" << endl;
		cin >> num2;

		cout << "Enter Operation (+,-,/,*) :" << endl;
		cin >> operation;

		// if else statement to check operation

		if (operation == "+") {
			cout << num1 + num2;

		}
		else if (operation == "-") {
			cout << num1 - num2;
		}
		else if (operation == "*") {
			cout << num1 * num2;
		}
		else if (operation == "/") {
			cout << num1 / num2;
		}
		else {
			cout << "Not a recognize operation!";
		}
		cout << endl;
		cout << "Would you like to play again? (y/n):";
		cin >> again;
		system("CLS");
	}
	
	while (again == "y");
	
}