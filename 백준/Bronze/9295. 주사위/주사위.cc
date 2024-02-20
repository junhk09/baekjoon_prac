#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main() {
	int t,k=1;
	cin >> t;
	int* a = new int[t];
	int* b = new int[t];
	for (int i = 0; i < t; i++) {
		cin >> a[i] >> b[i];
	}
	for (int i = 0; i < t; i++) {
		
		cout << "Case " << k++ << ": " << a[i] + b[i]<<endl;
		
	}

}