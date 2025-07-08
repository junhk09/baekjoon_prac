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
    int t,q=0,d=0,n=0,p=0;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int k;
        cin >> k;

        while (k != 0) {
            if (k >= 25) {
                k -= 25;
                q++;
            }
            else if (k >= 10) {
                k -= 10;
                d++;
            }
            else if (k >= 5) {
                k -= 5;
                n++;
            }
            else if (k >= 1) {
                k -= 1;
                p++;
            }

        }
        cout << q << " " << d << " " << n << " " << p << endl;
        q = 0, d = 0, n = 0, p = 0;


    }


    return 0;
}