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
int cnt = 0;
int recursion(string& s, int l, int r) {
    cnt++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}
int isPalindrome(string& s) {
    return recursion(s, 0, s.size() - 1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
       cout<< isPalindrome(s)<<" "<<cnt<<'\n';
       cnt = 0;
    }


    return 0;
}