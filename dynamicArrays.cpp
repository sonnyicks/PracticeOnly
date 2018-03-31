#include <iostream>
using namespace std;

typedef int* IntPtr;

int main(){
	int a[10];
	IntPtr p;
	int i;
	
	for (i=0; i<10; i++){
		a[i] = i;
	}
	p = a;
	
	for (i=0; i<10; i++){
		cout << p[i] << " ";
	}
	cout << endl;
	
	for (i=0; i<10; i++){
		p[i] = p[i]+1;
	}
	
	for (i=0; i<10; i++){
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}