#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int a[99] = { 0 };
	for (int i = 0; i < t; i++) {
		int* v = new int[t];
		int* e = new int[t];
		cin >> v[i] >> e[i];
		a[i] += e[i] - v[i] + 2;
		delete[]v;
		delete[]e;
	}
	for (int i = 0; i < t; i++) {
		cout << a[i]<<endl;
	}
	
}