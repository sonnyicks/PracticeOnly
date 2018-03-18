#include <iostream>
using namespace std;

void fillUp (int a[], int size);
int size = 5;
int array[5];
int main(){
	cout << "Enter the size: ";
	cin >> size;
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