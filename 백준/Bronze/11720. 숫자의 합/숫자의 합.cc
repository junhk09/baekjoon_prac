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
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,sum=0;
	cin >> n;
	string s,k;
	cin >> s;
	for (int i = 0; i < n; i++) {
		k = s[i];

		sum += stoi(k);
	}


	
	cout << sum;
}