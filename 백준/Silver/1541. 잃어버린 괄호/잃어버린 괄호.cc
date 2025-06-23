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
    string s,temp;
    cin >> s;
    int sum = 0;
    bool isMin = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-'|| s[i] == '+') {
            if (isMin) {
                sum -= stoi(temp);
                temp = "";
            }
            else {
                sum += stoi(temp);
                temp = "";
            }
           
        }
        else { 
            temp += s[i];
        }
        if (s[i] == '-') {
            isMin = true;
        }
    }
    if (!temp.empty()) {
        if (isMin) {
            sum -= stoi(temp);
        }
        else {
            sum += stoi(temp);
        }
       
   }
  
        cout << sum;
    

    return 0;
}