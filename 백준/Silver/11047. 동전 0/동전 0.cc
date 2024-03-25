#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;

int main() {
	vector <int> a;
	int n,k,res=0;
	
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int m;
		cin >> m;
		a.push_back(m);
	}
	while (true) {
		if (a[n - 1] > k) {
			a.pop_back();
			n--;
		}
		else if (a[n - 1] < k) {
			res++;
			k -= a[n - 1];
			
		}
		else{
			res++;
			break;
		}
	

	}
	cout << res;
	
}