#include <iostream>
using namespace std;

int main(){
	int *a, *b;
	int one = 5;
	int two = 15;
	int x[10];
	
	
	a = new int[10];
	for (int i=0; i<10; i++){
		a[i] = i+1;
		cout << a[i] << endl;
	}
	for (int i=0; i<10; i++){
		x[i] = i+5;
	}
	
	delete[] a;
	
	a = x;
	b = &a[3];
	cout << *b;
	
	return 0;
}