#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

int main() {
	int a, b, c;
	char d, e;

	cin >> a >> d >> b >> e >> c;

	if (a + c < b || b == 0) cout << "hasu";
	else cout << "gosu";

}