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
    int n,result=665;
    string s;
    cin >> n ;
    for (int i = 0; i < n; i++) {
        while (true) {
            result++;
            s = to_string(result);
            if (s.find("666") != -1) {
                break;
            }
        }
    }
    cout << result;



    return 0;
}