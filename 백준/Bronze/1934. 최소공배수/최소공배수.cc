#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
int res(int a, int b) {
	int c = a * b / gcd(a, b);
	return c;
}
int main() {
	int t;
	
	cin >> t;
	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;
		cout<<res(a, b)<<endl;
		

	}


}