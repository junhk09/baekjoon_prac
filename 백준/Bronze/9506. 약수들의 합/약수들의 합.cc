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
    int a=0,sum=0;
    vector<int>v;
    while (a != -1) {
        v.clear();
        sum = 0;
        cin >> a;
        for (int i = 1; i < a; i++) {
            if (a % i == 0) {
                v.push_back(i);
            }
        }
        for (int i = 0; i < v.size(); i++) {
            sum += v[i];
        }
        if (sum == a) {
            cout << a << " = ";
            for (int i = 0; i < v.size(); i++) {
                if (i == v.size() - 1) {
                    cout << v[i]<<endl;
                    break;
                }
                cout << v[i]<<" + ";
                
            }
        }
        else {
            if (a == -1) break;
            cout << a<<" is NOT perfect." << endl;
        }
    }


    return 0;
}