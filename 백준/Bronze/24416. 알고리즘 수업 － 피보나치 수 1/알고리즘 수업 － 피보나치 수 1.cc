#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <numeric>
#include <map>
#include <set>
#include <cmath>
using namespace std;
int fibo(int n) {
	if (n == 1 || n == 2) return 1;

	else return fibo(n - 1) + fibo(n - 2);

	


}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	cout << fibo(n) << " " << n - 2;



	return 0;


}