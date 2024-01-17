#include <iostream>
using namespace std;

int main() {

	int test,c,v;
	cin >> test;
	for (int i = 0; i < test; i++) {
		cin >> c >> v;
		cout << "You get " << c / v << " piece(s) and your dad gets " << c % v << " piece(s)." << endl;


	}


}