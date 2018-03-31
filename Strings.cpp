#include <iostream>
#include <string>
using namespace std;

int main(){
	char my_string[] = "Hello You";
	int index = 0;
	cout << my_string << endl;
	my_string[0]=' ';
	cout << my_string;
	while (my_string[index] != '\0'){
		if (my_string[index] != ' '){
			my_string[index] = 'X';
		}
		index++;
	}
	cout << my_string;
	
	return 0;
}