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
    int a, b, c,res=0;
    cin >> a >> b >> c;
    for (int i = 0; i < 3; i++) {
        int x, y;
        cin >> x >> y;
        for (int j = x; j < y; j++) {
            v[j]++;
        }
    }
    for (int i = 0; i < 100; i++) {
        if (v[i]) {
            if (v[i] == 1) {
                res += a;
            }
            else if (v[i] == 2) {
                res += b*2;
            }
            else {
                res += c*3;
            }
       }
       
    }
    cout << res;

    return 0;
}