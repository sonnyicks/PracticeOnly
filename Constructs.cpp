#include <iostream>
#include <cstring>
using namespace std;

class Table{
	public:
	int legs = 0;
	string color = "blue";
	double height = 5.3;
	double width = 1.0;
	string shape = "round";
	void get_legs();
	void get_color();
	void get_height();
	void get_width();
	void get_shape();
	void print();

	Table(){
		get_legs();
		get_color();
		get_height();
		get_width();
		get_shape();
	}
};

class SetTable: public Table{
	public:
	int plates = 0;
	int forks = 0;
	bool food = false;
	int glasses = 0;
	void set();
};

void print_menu();
char choose;
//Add functions for the menu

int main(){
	
	int people = 0;
	char yesno;
	
	SetTable mine;
	mine.print();
	cout << "How many people will be attending dinner?: ";
	cin >> people;
	mine.plates = people;
	mine.forks = people*2;
	mine.glasses = people;
	
	mine.set();
	
	cout << "Do you want to serve the food?:";
	cin >> yesno;
	if ((yesno=='y')||(yesno=='Y')){mine.food=true;}
	mine.set();
	
	return 0;
}

void Table::get_color(){
	cout << "Enter a color: ";
	cin >> color;
}

void Table::get_legs(){
	cout << "Enter a number of legs: ";
	cin >> legs;
}
void Table::get_height(){
	cout << "Enter height: ";
	cin >> height;
}
void Table::get_width(){
	cout << "Enter width: ";
	cin >> width;
}
void Table::get_shape(){
	cout << "Enter a shape: ";
	cin >> shape;
}
void Table::print(){
	cout << "Number of Legs: " << legs << endl
		 << "Color of Table: " << color << endl
		 << "Height of Table: " << height << endl
		 << "Width of Table: " << width << endl
		 << "Shape of Table: " << shape << endl;
}
void SetTable::set(){
	cout << endl << "Each guest gets a plate, a glass and 2 forks. \n";
	cout << "The table is set for " << glasses << " guests:" << endl;
	cout << "Plates: " << plates << endl
		 << "Glasses: " << glasses << endl
		 << "forks: " << forks << endl << endl;
	if (!food){cout << "The plates are empty." << endl;}
	else {cout << "The plates are full.  Time to eat!" << endl;}
}

void print_menu(){
	cout << "Change number of Guests (g): " << endl
		 << "Serve food (f): " << endl
		 << "Poor drinks (d): " << endl;
}



