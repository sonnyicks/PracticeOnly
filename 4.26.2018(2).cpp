#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string *cats;
string fname;

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
			 << "Years to mature: " << get_years() << endl 
			 << endl;
	}

	double get_rate(){return rate;}
	
	int get_years(){return mature_years;}
	
	string get_name(){return name;}
	
	int get_balance(){return balance;}
};

int main(){
	
	ofstream file;
	cats = new string[25];
	void retrieve (string);
	ofstream open();
	
	BankAccount mine, yours, his, hers;
	
	mine.set("Sonny", 10000);
	yours.set("Robyn", 50000);
	his.set ("Graham", 14878);
	hers.set ("Amanda", 12258);
	file = open();//file streams can be returned from functions
	
	mine.print(file);
	yours.print(file);
	his.print(file);
	hers.print(file);
	file.close();
	retrieve(fname);

	delete[] cats;
	return 0;
}

ofstream open(){
	ofstream a;
	cout << "What is the name of your file?: ";
	cin >> fname;
	
	a.open(fname);
	if(a.fail()){
		cout << "Unable to open file - terminating";
		exit(1);
	}
	return a;
}
//REMEMBER THIS FOR HOMEWORK!!!
void retrieve(string a){
	char x;
	int brk = 0;
	
	ifstream infile;
	infile.open(a);
	if(infile.fail()){
		cout << "Unable to open file - terminating";
		exit(1);
	}
//Retrieves each line in file as string
	for(int i=0; i<20; i++){
		do{
			infile.get(x);
			cats[i]+=x;
			if (x=='\n'){
				brk++;
				cout << cats[i];} 
		}while((x!='\n')&&(brk<20));
	}
}