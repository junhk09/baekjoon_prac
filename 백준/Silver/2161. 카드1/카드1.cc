#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
#include <queue>
using namespace std;
int main() {
    int n,num=0;
    queue <int> q;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
    while (!q.empty()) {
        if (q.size() != 1) {
            cout << q.front() << ' ';
            q.pop();
            int k = q.front();
            q.pop();
            q.push(k);
        }
        else {
            cout << q.front();
            break;
        }


    }



    
}