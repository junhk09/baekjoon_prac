#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main() {
	int n,res=0;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i <n; i++) {
		cin >> a[i];
		int b = 2;
		while (b < a[i]) {
			if (a[i] % b == 0) break;
			b++;
		}
		if (b == a[i]) res++;
	}
	cout << res;
}