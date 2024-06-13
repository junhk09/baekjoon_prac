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
    int a, b, i = 1;
    int date = 0;

    cin >> a >> b;

    if (i != a) {
        for (; i < a; i++) {
            if (i == 2)date += 28;
            else if (i == 4 || i == 6 || i == 9 || i == 11) date += 30;
            else date += 31;
        }
    }
    date += b;

    switch (date % 7) {
    case 1: cout << "MON";
        break;
    case 2:cout << "TUE";
        break;
    case 3:cout << "WED";
        break;
    case 4:cout << "THU";
        break;
    case 5:cout << "FRI";
        break;
    case 6:cout << "SAT";
        break;
    case 0:cout << "SUN";
        break;
    }
}