#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool desc(int a, int b) {
	return a > b;
}
int main() {
	int n,a[11],i=0;
	cin >> n;
	while (true) {
			a[i] = n % 10;
			i++;
			n /= 10;
			if (n / 10 == 0 && n % 10 == 0) break;
			else if (i == 10) break;
		

	}

	sort(a,a+i,desc);
	for (int j = 0; j <i; j++) {
		
			cout << a[j];
		
	}



}