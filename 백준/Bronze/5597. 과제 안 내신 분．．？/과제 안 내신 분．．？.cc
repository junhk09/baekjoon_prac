#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
int main() {
	vector<int>v;
	int a = 1;
	for (int i = 0; i < 28; i++) {
		int k;
		cin >> k;
		v.push_back(k);
	}
	while (a<=30) {
		if (find(v.begin(), v.end(), a) == v.end()) {
			cout << a << endl;
		}
		a++;
	}


	}



