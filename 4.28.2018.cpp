#include <iostream>
#include <string>
using namespace std;

int* result(int*);

int main(){
	int* y;
	result(y);
	cout << y;
	
	y= new int[10];
	for (int i=0; i<10; i++){
		y[i] = i+5;
		cout << y[i] << endl;
		cout << y << endl;
		
	}
	
	return 0;
	
	
	
}

int* result(int* a){
	int* x;
	a=x;
	cout << x;
	return x;
}