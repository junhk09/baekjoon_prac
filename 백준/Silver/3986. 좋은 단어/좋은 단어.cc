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
    int n,cnt=0;
   
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        stack<char>st;
        cin >> s;
       
        for (char c : s) {
            if (!st.empty() && st.top() == c) {
                st.pop();
            }
            else {
                st.push(c);
            }
        }
        if (st.empty()) {
            cnt++;
        }

    }


    cout << cnt;


    return 0;
}