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
    int n, a[26] = { 0 };
    vector<char>v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        a[s[0] - 'a']++;
  }
    for (int i = 0; i < 26; i++) {
        if (a[i] > 4) {
            v.push_back(i+'a');
        }
    }
   
    if (!v.empty()) {
        sort(v.begin(), v.end());
        for (char i : v) {
            cout << i;
        }
        
    }
    else {
        cout << "PREDAJA";
    }
   

    return 0;
}