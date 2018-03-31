#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
	char a[80], b[80];
	
	cout << "Enter something: \n"; 
	cin.getline (a, 5);
	cout << a << "---End of input.";
	return 0;
}