#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <numeric>
using namespace std;
int main() {
    vector<double>v;
    double total=0;
    double sum = 0;
    for (int i = 0; i < 20; i++) {
        string s,grade;
        double a;
       
        cin >> s >> a >> grade;
        total += a;
        if (grade == "A+") {
            v.push_back(a * 4.5);
        }
        if (grade == "A0") {
            v.push_back(a * 4.0);
        }
        if (grade == "B+") {
            v.push_back(a * 3.5);
        }
        if (grade == "B0") {
            v.push_back(a * 3.0);
        }
        if (grade == "C+") {
            v.push_back(a * 2.5);
        }
        if (grade == "C0") {
            v.push_back(a * 2.0);
        }
        if (grade == "D+") {
            v.push_back(a * 1.5);
        }
        if (grade == "D0") {
            v.push_back(a * 1.0);
        }
        if (grade == "F") {
            v.push_back(a * 0.0);
        }
        if (grade == "P") {
            total -= a;
        }
   }
    sum = accumulate(v.begin(), v.end(), double(0));

    cout << sum / total;
    
}