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

int main(){
	
	Table mine;
	mine.print();
	
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






