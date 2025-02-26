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
int visited[500];
vector<int>v[500];
int res=0;
void dfs(int k) {

	visited[k] = 1;
	
	for (int i = 0; i < v[k].size(); i++) {
		int x = v[k][i];
		if (visited[x] == 0) {
			res++;
			dfs(x);
		}

	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for (int i = 1; i <= n; i++) {
		sort(v[i].begin(), v[i].end());
	}
	dfs(1);

	cout << res;

	return 0;


}