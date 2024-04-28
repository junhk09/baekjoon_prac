#include <iostream>
using namespace std;
int main()
{
    int a, b, c, max = -1;

    while (1) {
        cin >> a >> b >> c;
        if ((a == 0) and (b == 0) and (c == 0)) break;

        if (max < a) max = a;
        if (max < b) max = b;
        if (max < c) max = c;

        if (max >= (a + b + c - max)) cout << "Invalid" << endl;
        else if ((a == b) and (b == c)) cout << "Equilateral" << endl;
        else if ((a == b) or (b == c) or (a == c)) cout << "Isosceles" << endl;
        else cout << "Scalene" << endl;
        max=0;
    }
}