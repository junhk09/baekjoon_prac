#include <iostream>
#include <string>
using namespace std;

class info {
public:
    string name;
    int day;
    int month;
    int year;
};

int main() {
    int n; 

    cin >> n;
    info* a = new info[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].day >> a[i].month >> a[i].year;
    }

    int maxyear = a[0].year;
    int minyear = a[0].year;
    info* b = new info[n];
    info* c = new info[n];
    b[0] = a[0];
    c[0] = a[0];

    for (int i = 1; i < n; i++) {
        if (maxyear < a[i].year) {
            maxyear = a[i].year;
            b[0] = a[i]; 
                
        }
        else if (maxyear == a[i].year) {
            if (b[0].month < a[i].month || (b[0].month == a[i].month && b[0].day < a[i].day)) {
                b[0] = a[i]; 
                    
            }
        }

        if (minyear > a[i].year) {
            minyear = a[i].year;
            c[0] = a[i]; 
                  
        }
        else if (minyear == a[i].year) {
            if (c[0].month > a[i].month || (c[0].month == a[i].month && c[0].day > a[i].day)) {
                c[0] = a[i]; 
                     
            }
        }
    }

    cout << b[0].name << endl << c[0].name;

    
    delete[] a;
    delete[] b;
    delete[] c;

    return 0;
}