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
    map<string, string>mp;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        mp.insert(make_pair(a, b));
    }
    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
        auto it = mp.find(s);
        cout << it->second << endl;

    }

    return 0;
}