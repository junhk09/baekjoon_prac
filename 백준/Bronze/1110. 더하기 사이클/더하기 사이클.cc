#include <iostream>
using namespace std;

int main() {
	int n,i=0,save;
	cin >> n;
	save = n;
	while (true) {
		n=(n%10)*10+((n / 10 + n % 10)%10);
		i++;
		if (save == n) break;
	}
	cout << i;

}