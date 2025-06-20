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
    string s;
    int cmp = 1;
    bool res = false;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == s[s.size() - cmp]) {
            cmp++;
            res = true;
            continue;
            
        }
        else {
            res = false;
            cout << "0";
            break;
        }
  }
    if (res == true) {
        cout << "1";
    }
    return 0;
}