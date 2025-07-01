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
    int a[9][9],max=-1;
    vector<int>v;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int k;
            cin >> k;
            a[i][j] = k;
            if (max < k) {
                v.clear();
                max = k;
                v.push_back(i + 1);
                v.push_back(j+1);
               
            }
        }
    }

    cout << max << endl;
   
        cout << v[0] << " "<<v[1];
    
    return 0;
}