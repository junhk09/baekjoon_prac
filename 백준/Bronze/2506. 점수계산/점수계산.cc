#include <iostream>
using namespace std;

int main() {
	int n, sum = 0,score=0;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 1) {
			score++;
			sum += score;
		
		}
		if (a[i] == 0) {
			score=0;
		}
	}
	delete[]a;
	cout << sum;

}