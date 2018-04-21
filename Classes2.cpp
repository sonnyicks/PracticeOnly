#include <iostream>
#include <string>

using namespace std;

class Computer{
	private:
	string ios;
	int ram;
	int storage;
	int monitor_size;
	public:
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
	Computer(){
		get_ios();
		get_ram();
		get_storage();
		get_monitor_size();
	}
};

int main(){
	Computer mine;
	return 0;
}
