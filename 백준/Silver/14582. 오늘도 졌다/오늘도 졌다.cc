#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
	int a[9], b[9], suma = 0, sumb = 0,win = 0;
	for (int i = 0; i < 9; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 9; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < 9; i++) {
		suma += a[i];
		if (suma > sumb) win = 1;
		sumb += b[i];
		if (suma < sumb && win == 1) win = 2;
	}
	if (win == 2) { cout << "Yes"; }
	else { cout << "No"; }


}