#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

int main() {
	string a,b;
	while (true) {
		cin >> a;
		b = a;
		if (a == "0") break;
		 reverse(a.begin(), a.end());
		 if (a == b) {
			 cout << "yes" << endl;
		 }
		 else cout << "no" << endl;
	}


}