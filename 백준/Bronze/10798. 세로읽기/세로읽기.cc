#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> v;
    for (int i = 0; i < 5; i++) {
        string k;
        cin >> k;
        v.push_back(k);
    }
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (i < v[j].size()) {
                cout << v[j][i];
            }
            else {
                continue;
            }


        }
    }




}