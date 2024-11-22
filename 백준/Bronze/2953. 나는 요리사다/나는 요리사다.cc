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
	int a[5],sum=0,max,res;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			int k;
			cin >> k;
			sum += k;
		}
		a[i] = sum;
		sum = 0;
		
	}
	max = a[0];
	for (int i = 0; i < 5; i++) {
		if (max < a[i]) {
			max = a[i];
			res = i + 1;
		}
	}
	if (max == a[0]) {
		res = 1;
	}
	cout << res<<" "<<max;

}