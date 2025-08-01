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
long long int factorial(int n) {
    if (n <= 1) return 1;
    return factorial(n - 1) * n;
}
long long int combination(int r,int c) {
   long long int n=1;
    if (r > c - r) {
        for (int i = r + 1; i <= c; i++) {
            n *= i;
        }
       return  n / factorial(c - r);

   }
    else {
        for (int i = c - r + 1; i <= c; i++) {
            n *= i;
        }
      return   n / factorial(r);

    }



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, m;
        cin >> n >> m;
        cout << combination(n, m)<<'\n';
   }




    return 0;
}