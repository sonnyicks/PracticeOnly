#include <iostream>
#include <string>
using namespace std;

int main(){
	string a = "Hello"; //first way to initialize
	string b = " You";
	string c;
	string d(" jerk"); //second way to initialize
	string e;
	string line;
	
	// adding strings
	cout << a << endl << b << endl;
	c = a+b;
	cout << c << d << endl;
	
	e = "I want to say " + a + b + d;
	cout << e << endl << "Now, enter something else: \n";
	getline (cin, line);
	cout << line;
	
	
	return 0;
}