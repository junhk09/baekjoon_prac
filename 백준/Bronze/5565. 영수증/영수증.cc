#include <iostream>
using namespace std;

int main() {
    int a[9], n,sum=0;
    cin >> n;
    for (int i = 0; i < 9; i++) {
        cin >> a[i];
        sum += a[i];
    }
    cout << n - sum;

}