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
int v[104];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s,cmp;
    cin >> s;
    cmp = s;
    reverse(s.begin(), s.end());
    if (s == cmp) cout << 1;
    else cout << 0;

    return 0;
}