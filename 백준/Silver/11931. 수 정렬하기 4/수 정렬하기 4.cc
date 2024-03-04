#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool desc(int a, int b) {
    return a > b;
} // 내림차순시 필요한 함수

int main() {
	int n;
	cin >> n;
	int* b = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	sort(b, b + n, desc);
	for (int i = 0; i < n; i++) {
		cout << b[i] <<'\n';
	}

}