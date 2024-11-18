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
	int n, m,sum=0;
	vector<int>v;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		v.push_back(k);
	}
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			for (int l = j + 1; l < n; l++) {
				if (sum < v[i] + v[j] + v[l] && v[i] + v[j] + v[l] <= m) {
					sum = v[i] + v[j] + v[l];
				}

			}
		}


	}
	cout<<sum;



}



