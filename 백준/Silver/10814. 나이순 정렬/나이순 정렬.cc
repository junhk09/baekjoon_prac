#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
#include <map>
using namespace std;
class name {
public:
	int a;
	string b;

};
bool compare(name n, name m) {
	return n.a < m.a;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	name* k = new name[n];
	for (int i = 0; i < n; i++) {
		cin >> k[i].a >> k[i].b;
	}
	stable_sort(k, k + n, compare);
	for (int i = 0; i < n; i++) {
		cout << k[i].a << " " << k[i].b << '\n';
	}


}