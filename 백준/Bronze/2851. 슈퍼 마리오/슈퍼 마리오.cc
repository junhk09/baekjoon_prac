#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	int sum=0,dis=0;
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		int k;
		cin >> k;
		v.push_back(k);
		
	}
	
		for (int i = 0; i < 10; i++) {
			sum += v[i];
			int s = abs(100 - sum);
			int d = abs(100 - dis);
			if (s < d) dis = sum;
			else if (s == d) dis = max(dis, sum);
		}
		cout << dis << endl;
	


}