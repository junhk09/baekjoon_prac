#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <numeric>
using namespace std;
int gcd(int a, int b) {
	int n;
	while (b != 0) {
		n = a % b;
		a = b;
		b = n;
	}
	return a;
}
int lcm(int a, int b) {
	return a * b / gcd(a, b);
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	long long int a, b;
	cin >> a >> b;
	cout<<lcm(a, b);


}