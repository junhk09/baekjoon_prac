#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
using namespace std;
int facto(int a) {
	int fac = 1;
	for (int i = 1; i <= a; i++) {
		fac *= i;
	}
	return fac;

}
int main() {
	int a, b;
	cin >> a >> b;
cout<<	facto(a) / (facto(b) * facto(a - b));



}
