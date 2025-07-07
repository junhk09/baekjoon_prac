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
    int k[100][100] = { 0 };
    int n,res=0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        for (int a = x - 1; a < x + 9; a++) {
            for (int b = y - 1; b < y + 9; b++) {
                if (k[a][b] == 0) {
                    k[a][b] = 1;
                }  
            }
        }
  }
    
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (k[i][j] == 1) {
                res++;
            }
        }
    }
    cout << res;
    return 0;
}