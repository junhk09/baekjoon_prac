#include <iostream>
#include <string>
using namespace std;
class Soccer {
public:
    int a;
    string b;

};
int main() {
    int n, p;
    cin >> n;
    string* name = new string[n];
    for (int i = 0; i < n; i++) {
        cin >> p;
        Soccer* k = new Soccer[p];
        int v = 0, max = 0;
        for (int j = 0; j < p; j++) {
            cin >> k[j].a >> k[j].b;
            if (max < k[j].a) {
                max = k[j].a;
                v = j;
                name[i] = k[j].b;
            }
           
        }
        
       
        delete[] k;
    } 
    for (int i = 0; i < n; i++) {
        cout << name[i] << endl;
    }
    delete[]name;
    return 0;
}




