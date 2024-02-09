#include <iostream>
using namespace std;
int main() {
	int a[10][2],n[10],sum=0,max=0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> a[i][j];
			if (j == 1) {
				n[i] = a[i][j] - a[i][0];
				
			}
		}
		sum += n[i];
		if (max < sum) {
			max = sum;
		}
		
	}
	cout << max;
		



	





}
