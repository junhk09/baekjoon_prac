#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int n, k;
	vector<int>v;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		int s;
		if (n % i == 0) {
			s = i;
			v.push_back(s);
		}

	}
	sort(v.begin(), v.end());
	cout << v[k-1];


}