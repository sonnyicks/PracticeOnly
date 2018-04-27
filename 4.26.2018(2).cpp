#include <iostream>
#include <string>
#include <fstream>
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
	
	void print(ostream& outs){
	outs << "Name: " << get_name() << endl
		 << "Balance: $" << get_balance() << endl
		 << "Rate: " << get_rate() << endl
		 << "Years to mature: " << get_years() << endl << endl;
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
	string fname;
	char x;
	int brk = 0;

	BankAccount mine, yours, his, hers;
	mine.set("Sonny", 10000);
	yours.set("Robyn", 50000);
	his.set ("Graham", 14878);
	hers.set ("Amanda", 12258);
	
	ofstream file;
	cout << "What is the name of your file?: ";
	cin >> fname;
	
	file.open(fname);
	
	mine.print(file);
	yours.print(file);
	his.print(file);
	hers.print(file);
	
	file.close();
	
	ifstream infile;
	infile.open(fname);
	
	do{
	infile.get(x);
	cout << x;
	if (x=='\n'){
		brk++;
		}
	}while(brk<20);
	
	
	

		
	return 0;
}