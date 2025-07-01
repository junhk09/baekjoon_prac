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
    int n, m;
    cin >> n >> m;
    int a[100][100],b[100][100],sum[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int k;
            cin >> k;
            a[i][j] = k;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int k;
            cin >> k;
            b[i][j] = k;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          sum[i][j]= a[i][j]+b[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}