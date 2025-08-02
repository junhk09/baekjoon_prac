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
    int t;
    vector<int>v;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++) {
            int k;
            cin >> k;
            v.push_back(k);
        }
        sort(v.begin(), v.end());
        cout << (v.back() - v.front()) * 2 << '\n';
        v.clear();

    }


    return 0;
}