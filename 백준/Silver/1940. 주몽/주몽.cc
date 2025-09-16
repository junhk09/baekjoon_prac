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
    int n, m,res=0,cnt=0;
    vector<int>v;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        v.push_back(k);
    }
    for (int i = 0; i < v.size(); i++){
        for (int j = i+1; j < v.size(); j++) {
            res = v[i]+v[j];
            if (res == m) {
                cnt++;
            }
            res = 0;
        }
      


    }



    cout << cnt;


    return 0;
}