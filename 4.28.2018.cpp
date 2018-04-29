#include <iostream>
#include <string>
using namespace std;

int* result(int*);

int main(){
	int* y;
	result(y);
	cout << y;
	
	return 0;
}


int* result(int* a){
	int* x;
	
	
	a=x;
	cout << x;
	return x;
}