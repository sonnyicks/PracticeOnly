#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
	char my_string[] = "Hello You";
	char small_string[] = "Hello You";
	int index = 0;
	cout << my_string << endl;
	
	if (strcmp(my_string, small_string)){
		cout << "The strings are not the same.";
	}
	else {cout << "These strings are the same.";}
	
	cout << endl << strlen(my_string) << endl;
	strcat (my_string, " jerk!");
	cout << my_string;
	
	
	return 0;
}