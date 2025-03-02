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
int n, m;
vector<int>v(9);
bool visited[9];
void dfs(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << v[i] << ' ';
			
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			v[cnt] = i;
			visited[i] = false;
			dfs(cnt + 1);
			
		}
	}
	
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n >> m;
	dfs(0);
	


	return 0;


}