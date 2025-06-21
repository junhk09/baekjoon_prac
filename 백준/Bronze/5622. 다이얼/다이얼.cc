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
    cin >> s;
    vector<int>v;
    int res=0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'C') {
            v.push_back(3);
       }
        if (s[i] >= 'D' && s[i] <= 'F') {
            v.push_back(4);
        }
        if (s[i] >= 'G' && s[i] <= 'I') {
            v.push_back(5);
        }
        if (s[i] >= 'J' && s[i] <= 'L') {
            v.push_back(6);
        }
        if (s[i] >= 'M' && s[i] <= 'O') {
            v.push_back(7);
        }
        if (s[i] >= 'P' && s[i] <= 'S') {
            v.push_back(8);
        }
        if (s[i] >= 'T' && s[i] <= 'V') {
            v.push_back(9);
        }
        if (s[i] >= 'W' && s[i] <= 'Z') {
            v.push_back(10);
        }
    }
    for (int i = 0; i < v.size(); i++) {
        res += v[i];
    }

    cout << res;


    return 0;
}