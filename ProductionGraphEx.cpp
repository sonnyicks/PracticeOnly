#include <iostream>
using namespace std;

int production[4];
int plant = 1;
const int plantNum = 4;
void inputData (int production[], int lastPlantNumber);
void scale (int a[], int size);
void graph (const int asteriskCount[], int lastPlantNumber);

int main(){
	
	return 0;
}

void inputData (int production[], int lastPlantNumber){
	for (int plantNumber = 1; plantNumber <= lastPlantNumber; plantNumber++){
		cout << endl
			 << "Enter production data for plant number " << plantNumber << endl;
		// getTotal(a[plantNumber-1]);
	}
}
