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
void bfs(int a) {
	queue<int>q;
	q.push(a);
	visited[a] = 1;
	ranking[a] = res++;
	while (!q.empty()) {
		int save = q.front();
		q.pop();
		for (int i = 0; i < gf[save].size(); i++) {
			int x = gf[save][i];
			if (visited[x] == 0) {
				ranking[x] = res++;
				q.push(x);
				visited[x] = 1;
			}
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
		sort(gf[i].begin(), gf[i].end());
	}

	bfs(r);

	for (int i = 1; i <= n; i++) {
		cout << ranking[i] << '\n';
	}


	return 0;


}