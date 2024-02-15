#include <iostream>
#include <string>
using namespace std;


int main() {
	int a, b, max = 0,rest1=0,rest2=0;
	
	cin >> a >> b;
		
	for (int i = 1; i <= a || i <= b; i++) {
		if (a % i == 0 && b % i == 0) {
			max = i;
			rest1 = a / i;
			rest2 = b / i;
			if (max < i) {
				max = i;
				 rest1 = a / i;
				 rest2 = b / i;
			}

			}

		}
		
		cout << max<<endl;
		cout << max * rest1 * rest2;
	

}