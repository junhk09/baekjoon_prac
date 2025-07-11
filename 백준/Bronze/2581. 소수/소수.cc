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
    int n, m,cnt=0,sum=0;
    vector<int>v;
    cin >> n >> m;
    for (int i = n; i <= m; i++) {
        for (int j = 2; j <= i; j++) {
            if (i % j == 0) {
                cnt++;
            }


        }
        if (cnt == 1) {
            v.push_back(i);
           
        }
        cnt = 0;
    }
    if (!v.empty()) {
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++) {
            sum += v[i];
        }
        cout << sum << endl << v[0];
    }
    else {
        cout << -1;
    }

    return 0;
}