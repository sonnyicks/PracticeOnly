#include <iostream>
#include <string>
using namespace std;

class BankAccount{
	private:
	string name;
	double balance = 1000;
	double rate = 5.5;
	int mature_years = 30;
	
	public:
	string set_name(){
		cout << "name: ";
		cin >> name;
		return name;
	}
	void set (string a, double dollars){
		name = a;
		balance = dollars;
	}
	// double set_balance(){
		// cout << "Starting balance: ";
		// cin >> balance;
		// return balance;
	// }
	
	double get_rate(){
		return rate;
	}
	
	int get_years(){
		return mature_years;
	}
	
	string get_name(){
		return name;
	}
	
	int get_balance(){
		return balance;
	}
	
	BankAccount(){
		// set_name();
		// set_balance();
	}
};

int main(){
	BankAccount mine;
	mine.set("Sonny", 10000);
	cout << "Name: " << mine.get_name() << endl
		 << "Balance: $" << mine.get_balance() << endl
		 << "Rate: " << mine.get_rate() << endl
		 << "Years to mature: " << mine.get_years() << endl;
	
	return 0;
}