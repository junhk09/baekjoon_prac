#include <iostream>
using namespace std;
int main() {
	int m, n,sum=0,min=-1;
	cin >> m;
	cin >> n;
	for (int i = m; i <= n; i++) {
		int count = 1;
		while (count * count < i) {
			count++;
		}
		if (count * count == i) {
			sum+=i;
			if (min==-1 || min>i) {
				min = i;
			}
		}
		
	}
	
	if (min == -1) {
		cout << "-1";
	}
	else {
		cout << sum << endl << min;
	}
}
