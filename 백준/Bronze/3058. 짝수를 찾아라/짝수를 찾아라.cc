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
    int n,sum=0;
    cin >> n;
    vector<int>v;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 7; j++) {
            int k;
            cin >> k;
            if (k % 2 == 0) {
                v.push_back(k);
                sum += k;
            }
        }
        sort(v.begin(), v.end());

        cout << sum <<" "<< v[0] << '\n';
        v.clear();
        sum = 0;

    }

    return 0;
}