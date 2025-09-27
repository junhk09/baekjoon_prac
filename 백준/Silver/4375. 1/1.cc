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
    int n;
   
    
    while (cin>>n) {
        long long ret = 1, cnt = 1;
        while (true) {
            if (ret % n == 0) {
                cout << cnt << '\n';
                break;
            }
            else {
                ret = (ret * 10) + 1;
                ret %= n;
                cnt++;
            }

         

        }

    }





    return 0;
}