#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int a=1, b=1;
	while (a != 0 && b != 0) {
	
		cin >> a >> b;
		if (a > b) {
			if (a % b == 0) {
				cout << "multiple" << endl;
			}
			else {
				cout << "neither" << endl;
			}
		}
		else if (a < b) {
			if (b % a == 0) {
				cout << "factor" << endl;
			}
			else {
				cout << "neither" << endl;
			}
		}
	}
}