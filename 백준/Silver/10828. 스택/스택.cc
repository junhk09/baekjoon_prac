#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;
int main() {
	int n;
	string k;
	stack<int>a;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> k;
		if (k == "push") {
			int m;
			cin >> m;
			a.push(m);
		}
		else if (k == "top") {
			if (!a.empty()) {
				cout << a.top();
				cout << endl;
			}
			else {
				cout << "-1" << endl;
			}
		}
		else if (k == "size") {
			cout<<a.size();
			cout << endl;
		}
		else if (k == "empty") {
			cout<<a.empty();
			cout << endl;
		}
		else if (k == "pop") {
			if (!a.empty()) {
				cout << a.top() << endl;
				a.pop();
				
			}
			else {
				cout << "-1" << endl;
			}
		}


	}



}