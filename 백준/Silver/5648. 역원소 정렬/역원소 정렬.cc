#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
#include <map>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<long long int>a;
	for (int i = 0; i < n; i++) {
		string k;
		long long int res;
		cin >> k;
		reverse(k.begin(), k.end());
		res=stoll(k);
		a.push_back(res);
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}




}