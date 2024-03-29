#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
using namespace std;
int main() {
	
	int a, b, v,day;
	cin >> a >> b >> v;
	
		day = (v - b-1) / (a - b)+1;
	
	

	cout << day;
}