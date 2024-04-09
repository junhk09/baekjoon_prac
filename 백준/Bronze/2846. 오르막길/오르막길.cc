#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector<int> up;
    int d, max = 0;
    int n, p;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p;
        if (i > 0 && up[up.size() - 1] >= p) {
            d = up[up.size() - 1] - up[0];
            if (d > max) max = d;
            up.clear();
        }
        up.push_back(p);
    }
    d = up[up.size() - 1] - up[0];
    if (d > max) max = d;
    cout << max;
}