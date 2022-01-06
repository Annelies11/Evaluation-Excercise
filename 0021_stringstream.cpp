#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<int> ngisi(string str) {
	stringstream hasil(str);
	vector<int> ss;
	char ch;
	int tmp;
	while(hasil>>tmp) {
		ss.push_back(tmp);
		hasil >> ch;
	}
	return ss;
}

int main() {

	string str;
	cin>>str;
	vector<int> simpan = ngisi(str);
	cout<<simpan.size()<<endl;
	for(int i = 0; i < simpan.size(); i++) {
		cout<<simpan[i]<<"  ";
	}
	
	
}
