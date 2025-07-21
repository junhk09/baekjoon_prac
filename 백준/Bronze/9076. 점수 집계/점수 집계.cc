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
    int n;
    cin >> n;
    vector<int>v;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            int k;
            cin >> k;
            v.push_back(k);
        }
        sort(v.begin(), v.end());
        if (v[3] - v[1] >= 4) {
            cout << "KIN" << '\n';
        }
        else {
            cout << v[1] + v[2] + v[3] << '\n';
        }

        v.clear();


  }


    return 0;
}