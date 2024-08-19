#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <numeric>
#include <map>
using namespace std;
int main() {
	vector<int>v;
	
	long long int n, sum=0;
	cin >> n;
	for (int i = 1; i < n; i++) {
		sum += i * n + i;
	}
	cout << sum;


}