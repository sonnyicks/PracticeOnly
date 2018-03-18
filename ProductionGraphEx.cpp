#include <iostream>
#include <cmath>

using namespace std;

const int Number_of_plants = 4;
void scale (int a[], int size);
void input_data (int a[], int last_plant_number);
void graph (const int asterisk_count[], int last_plant_number);
void get_total (int& sum);
void print_asterisks(int n);

int main(){
	int production[Number_of_plants];
	
	cout << "This program displays a graph showing \n"
		 << "production for each plant in the company \n";
	input_data (production, Number_of_plants);
	scale (production, Number_of_plants);
	graph (production, Number_of_plants);
	return 0;
}

void input_data(int a[], int last_plant_number){
	for (int plant_number = 1; plant_number <= last_plant_number; plant_number++){
		cout << endl
			 << "Enter production data for plant number " << plant_number << endl;
		get_total(a[plant_number-1]);
	}
}

void get_total(int& sum){
	cout << "Enter number of units produced by each department. \n"
		 << "Append a negative number to the end of the list. \n";
	
	sum = 0;
	int next;
	cin >> next;
	while (next >=0){
		sum = sum + next;
		cin >> next;
	}
	
	cout << "Total = " << sum << endl;
}

void scale (int a[], int size){
	for (int index = 0; index < size; index++){
		a[index] = round(a[index]/1000.0);
	}
}


void graph (const int asterisk_count[], int last_plant_number){
	cout << "\nUnits produced in thousands of units: \n";
	for (int plant_number = 1; plant_number <=last_plant_number; plant_number++){
		cout << "Plant #" << plant_number << " ";
		print_asterisks(asterisk_count[plant_number-1]);
		cout << endl;
	}
}

void print_asterisks(int n){
	for (int count = 1; count <=n; count++){
		cout << "*";
	}
}
