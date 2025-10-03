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
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    vector<int>v;
    v.push_back(x);
    v.push_back(y);
    v.push_back(w - x);
    v.push_back(h - y);
    sort(v.begin(), v.end());
    cout << v[0];



    
    return 0;
}