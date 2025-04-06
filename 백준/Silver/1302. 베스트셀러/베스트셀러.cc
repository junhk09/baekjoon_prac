#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
using namespace std;

bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    map<string, int> m;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        m[s]++; // 기존에 없으면 0에서 시작, 자동으로 +1
    }

    vector<pair<string, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), cmp);

    // 가장 많이 나온 단어 출력
    cout << v[0].first << '\n';

    return 0;
}