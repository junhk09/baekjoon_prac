#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	long long int count,n,max=0;
	long long int a[10] = { 0 };
	cin >> n;
	while (n>0) {
		long long int	k = n % 10;
		n /= 10;
		a[k]++;
		
	}
	max = a[0];
	count = (a[6] + a[9]);
	if (count % 2 == 0) {
		count /= 2;
		a[6] = count;
		a[9] = count;
	}
	else if (count % 2 != 0) {
		count /= 2;
		count++;
		a[6] = count;
		a[9] = count;
	}
	for (int i = 0; i < 10; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	cout << max;
	//66999
}