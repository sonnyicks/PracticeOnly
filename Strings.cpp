#include <iostream>
#include <string>
using namespace std;

int main(){
	char my_string[10] = "Hello You";
	
	cout << my_string << endl;
	my_string[0]=' ';
	cout << my_string;
	
	return 0;
}