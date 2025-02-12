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
	if (n == 0) return 0;
	if (n == 1) return 1;

	
	return fibo(n-2)+fibo(n-1);
	
	
}




int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	cout << fibo(n);



	return 0;


}