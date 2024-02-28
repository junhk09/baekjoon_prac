#include <iostream>
#include <algorithm>
using namespace std;
bool desc(int a, int b) {
    return a > b;
} // 내림차순시 필요한 함수

int main() {
    int k,a[1000],b[10];
    cin >> k;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> b[j];
       }
        sort(b, b+10, desc);
        a[i] = b[2];
    }
    for (int n = 0; n < k; n++) {
        cout << a[n] << endl;
  }
    
}