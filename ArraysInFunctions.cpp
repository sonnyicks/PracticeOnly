#include <iostream>
using namespace std;

void fillUp (int a[], int size);
int size = 18;
int array[18];
int main(){
	cout << "Enter the size: ";
	fillUp (array, size);
	return 0;
}

void fillUp (int a[], int size){

	cout << "Enter " << size << " numbers: \n";
	for (int i=0; i < size; i++){
		cin >> a[i];
	}
	size--;
	cout << "The last array index used is " << size << endl;
}