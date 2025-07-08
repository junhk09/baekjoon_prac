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
    int n,res=2;
    cin >> n;
    while (n--) {
        res = res * 2 - 1;
    }

    cout << res * res;

    return 0;
}