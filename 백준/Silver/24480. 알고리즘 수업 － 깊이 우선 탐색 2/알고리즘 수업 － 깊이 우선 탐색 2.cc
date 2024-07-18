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
vector<int>gf[100005];
int visited[100005];
int ranking[100005];
int res = 1;
void dfs(int a) {
	visited[a] = 1;
	ranking[a] = res++;
	for (int i = 0; i < gf[a].size(); i++) {
		int x = gf[a][i];
		if (visited[x] == 0) {
			dfs(x);
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, r;
	cin >> n >> m >> r;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		gf[x].push_back(y);
		gf[y].push_back(x);
	}
	for (int i = 1; i <= n; i++) {
		sort(gf[i].begin(), gf[i].end(),greater<int>());
	}

	dfs(r);

	for (int i = 1; i <= n; i++) {
		cout << ranking[i] << '\n';
	}


	return 0;


}