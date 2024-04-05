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
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int a, b, c, d,res1,res2;
	cin >> a >> b >> c >> d;
	res2 = b * d;
	res1 = a * d + b * c;
	
	
	cout << res1/ gcd(res1, res2) << " " << res2/gcd(res1, res2);

}
