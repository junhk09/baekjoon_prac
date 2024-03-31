#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n,grade,p,rank=1,res=0;
	vector<int> v;
	cin >> n >> grade >> p;
	
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		v.push_back(k);
	}

	for (int i = 0; i < n; i++) {
		if (v[i] > grade) {
			rank++;
		}
		else if (v[i] == grade) {
			rank = rank;
		}
		else {
			break;
		}
		res++;
	}
	if (res >= p) rank = -1;
	if (n == 0) rank = 1;

	cout << rank;

	
}