#include <iostream>
using namespace std;

int main(){
	// int *p1, *p2, *p3, v1, v2;
	
	// v1 = 0;
	// p1 = &v1;
	// *p1 = 8;
	// p2 = p1;
	// p3 = new int; //nameless variable


	// cout << p1 << endl << p2 << endl;
	// cout << "Enter a number: ";
	// cin >> *p3;
	// cout << *p3 << " added to 3 is " << *p3+3;
	// cout << endl << "it is located at " << p3;
	
	int *p1;
	
	for(int i=1; i<100; i++){
		p1 = new int;
		*p1 = i;
		cout << *p1;
	}
	return 0;
}