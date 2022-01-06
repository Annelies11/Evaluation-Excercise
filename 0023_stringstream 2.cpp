#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<int> milah(string str) {
	stringstream ss(str);
	vector<int> result;
	char ch;
	int temp;
	while(ss >> temp) {
		result.push_back(temp);
		ss >> ch;
	}
	return result;
}


int main() {
	string str;
	cin>>str;
	vector<int> isi = milah(str);
	for(int i = 0; i < isi.size(); i++) {
		cout<<isi[i]<<" ";
	}
}
