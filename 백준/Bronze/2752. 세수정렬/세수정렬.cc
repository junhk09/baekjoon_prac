#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c,d[3];
	cin >> a >> b >> c;
	d[0] = a;
	d[1] = b;
	d[2] = c;
	sort(d, d + 3);
	for (int i = 0; i < 3; i++) {
		cout << d[i]<<' ';
	}
}