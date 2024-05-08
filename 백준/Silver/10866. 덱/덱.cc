#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
#include <queue>
#include <deque>
using namespace std;
int main() {
    int n;
    deque<int>d;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == "push_back") {
            int k;
            cin >> k;
            d.push_back(k);
        }
        else if (s == "push_front") {
            int k;
            cin >> k;
            d.push_front(k);
        }
        else if (s == "front") {
            if (!d.empty()) {
                cout << d.front() << endl;
            }
            else {
                cout << -1 << endl;
            }
        }
        else if (s == "back") {
            if (!d.empty()) {
                cout << d.back() << endl;
            }
            else {
                cout << -1 << endl;
            }
        }
        else if (s == "size") {
            cout << d.size() << endl;
        }
        else if (s == "empty") {
            if (d.empty()) {
                cout << 1 << endl;
            }
            else {
                cout << 0 << endl;
            }
          
        }
        else if (s == "pop_front") {
            if (!d.empty()) {
                cout << d.front() << endl;
                d.pop_front();
            }
            else {
                cout << -1 << endl;
            }

        }
        else if (s == "pop_back") {
            if (!d.empty()) {
                cout << d.back() << endl;
                d.pop_back();
            }
            else {
                cout << -1 << endl;
            }
        }


    }



    
}