#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(){
	char a[80], b[80];
	
	cout << "Enter something: \n"; 
	cin.getline (a, 5);//copies only 4 char and \0
	cout << a << "---End of input." << endl;
	
	strcpy (a, "455");
	cout << a << endl;
	cout << atoi (a)+3; //converts string to int
	
	
	
	return 0;
}