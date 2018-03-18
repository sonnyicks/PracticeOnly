#include <iostream>
using namespace std;

int total = 0;
double scale (int number);
int round (double scaled);

int main(){
	cin >> total;
	cout << scale (total);
	return 0;
}

double scale (int a){
	double result = 0.0;
	result = round(a/1000.0);
	return result;
}

int round (double a){
	return a+.5;
}
