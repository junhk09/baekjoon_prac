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
int v[26];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
   
        for (char i : s) {
                v[i - 'a']++;
            

        }
    
    for (int i = 0; i < 26; i++) {
        cout << v[i] << " ";
    }



    return 0;
}