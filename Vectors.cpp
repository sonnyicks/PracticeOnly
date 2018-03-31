#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> sample;
	int cnt = 0;
	
	sample.push_back(0);
	sample.push_back(0);
	sample.push_back(0);
	sample.push_back(0);
	sample.push_back(0);
	
for (int i=0; i<sample.size(); i++){
	cout << endl << "Enter number " << i+1 << ": ";
	cin >> sample[i];
	cnt+=sample[i];
}

cout << "Your total is :" << cnt;
	return 0;
}