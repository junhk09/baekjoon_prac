#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <numeric>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	int result = 0;
	cin >> N;

	for (int i = 1; i < N; i++) {
		int sum = 0;
		int num = i;
		while (num != 0) { 
			sum += num % 10;
			num /= 10;
		}
		if (sum + i == N) { 
			result = i;
			break;
		}
	}

	cout << result;

	return 0;


}