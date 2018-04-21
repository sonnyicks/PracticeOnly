#include <iostream>
#include <string>

using namespace std;

class Computer{
	public:
	string ios;
	int ram;
	int storage;
	int monitor_size;
	string get_ios(){
		cout << "Enter IOS: ";
		cin >> ios;
		return ios;
	}
	int get_ram(){
		cout << "Enter RAM: ";
		cin >> ram;
		return ram;
	}
	int get_storage(){
		cout << "Enter storage space: ";
		cin >> storage;
		return storage;
	}
	int get_monitor_size(){
		cout << "Enter Monitor Size: ";
		cin >> monitor_size;
		return monitor_size;
	}
	void print(){
		cout << "IOS: " << ios << endl
			 << "RAM: " << ram << endl
			 << "Storage Space: " << storage << endl
			 << "Monitor Size: " << monitor_size << endl;
	}
	Computer(){
		get_ios();
		get_ram();
		get_storage();
		get_monitor_size();
	}
};
class Intel: public Computer{
	public:
	string color;
	string model;
	int serial_num;
	void print(){
		cout << "IOS: " << ios << endl
		<< "RAM: " << ram << endl
		<< "Storage Space: " << storage << endl
		<< "Monitor Size: " << monitor_size << endl
		<< "Computer color: " << color << endl
		<< "Model: " << model << endl
		<< "Serial Number: " << serial_num << endl;
	}
};

int main(){
	Intel mine;
	mine.color = "Green";
	mine.model = "Gamer";
	mine.serial_num = 554;
	mine.print();
	return 0;
}
