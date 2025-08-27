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
    cin >> n;
    vector<string>v;
    string ptn;
    cin >> ptn;
    int k = ptn.find('*');
    v.push_back(ptn.substr(0, k));
    v.push_back(ptn.substr(k + 1));


    for (int i = 0; i < n; i++) {
        string s,cmp1,cmp2;
        cin >> s;
        if (v[0].size()+v[1].size() > s.size()) {
            cout << "NE" << '\n';
        }
        else {
            cmp1 = s.substr(0, v[0].size());
            cmp2 = s.substr(s.size() - v[1].size());
            if (cmp1 == v[0] && cmp2 == v[1]) {
                cout << "DA" << '\n';
            }
            else {
                cout << "NE" << '\n';
            }
        }
      

    }


   

    return 0;
}