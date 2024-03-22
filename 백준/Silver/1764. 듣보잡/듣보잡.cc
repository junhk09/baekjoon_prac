#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	int a, b, count=0;
	vector<string>k;
	vector<string> king;
	string l;
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		cin >> l;
		k.push_back(l);
	}
	sort(k.begin(), k.end());
	for (int i = 0; i < b; i++) {
		cin >> l;
		if (binary_search(k.begin(), k.end(), l)) {
			count++;
			king.push_back(l);
		}
	}
	
	cout << count << endl;
	sort(king.begin(), king.end());
	for (int i = 0; i < king.size(); i++) {
		cout << king[i] << endl;
	}
	




}