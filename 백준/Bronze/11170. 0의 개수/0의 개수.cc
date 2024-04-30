#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
using namespace std;
int main() {
	int t,count=0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;
		for (int j = a; j <= b; j++) {
			string k = to_string(j);
			for (int i = 0; i < k.size(); i++) {
				if (k[i] == '0') {
					count++;
				}
			}

		}
		cout << count << endl;
		count = 0;
	}



}