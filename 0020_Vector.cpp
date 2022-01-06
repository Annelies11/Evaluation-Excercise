#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int arr[5] = {5,4,3,2,1};
	int a = sizeof(arr) / sizeof(arr[0]);

	int n = v1.size();
	int m = v1.capacity();	
	cout<<v1.size()<<endl;
	cout<<v1.capacity()<<endl;
	for(int i = 0; i < m; i++) {
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	vector<int>(v1).swap(v1);
	cout<<v1.size()<<endl;
	cout<<v1.capacity()<<endl;
	for(int i = 0; i < n; i++) {
		cout<<v1[i]<<" ";
	}
}
