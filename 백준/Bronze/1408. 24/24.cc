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
    string a, b;
    cin >> a >> b;
    vector<int>v;
    vector<int>k;
   
    k.push_back(stoi(a.substr(0, 2)));
    k.push_back(stoi(a.substr(3, 2)));
    k.push_back(stoi(a.substr(6, 2)));
    v.push_back(stoi(b.substr(0, 2)));
    v.push_back(stoi(b.substr(3, 2)));
    v.push_back(stoi(b.substr(6, 2)));
    if (v == k) {
        cout << "00:00:00";
   }
    else {
        int sec = v[2] - k[2];
        if (sec < 0) {
            sec += 60;
            v[1]--;
        }
        int min = v[1] - k[1];
        if (min < 0) {
            min += 60;
            v[0]--;
        }
        int hour = v[0] - k[0];
        if (hour < 0) {
            hour += 24;
        }
        cout.width(2);
        cout.fill('0');
        cout << hour << ":";
        cout.width(2);
        cout.fill('0');
        cout << min << ":";
        cout.width(2);
        cout.fill('0');
        cout << sec ;



    }

    // 14 50 35 13 52 30

    return 0;
}