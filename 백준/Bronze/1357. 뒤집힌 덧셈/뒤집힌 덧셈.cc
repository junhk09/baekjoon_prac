#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool desc(int a, int b) {
    return a > b;
} // 내림차순시 필요한 함수

int main() {
	int x, y;
	int sum;
	string a;
	string b;
	string result;

	cin >> a >> b;

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	x = stoi(a);
	y = stoi(b);

	sum = x + y;
	result = to_string(sum);
	reverse(result.begin(), result.end());

	cout << stoi(result) << endl;
}