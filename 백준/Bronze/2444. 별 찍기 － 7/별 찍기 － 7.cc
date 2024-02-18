#include <iostream>
using namespace std;

int main() {
    int N, count = 3;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1 - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }

        if (i == N)
            break;
        cout << '\n';
    }
    for (int i = 1; i < N; i++)
    {
        for (int x = i; x > 0; x--)
        {
            cout << " ";
        }
        for (int j = 2 * N - count; j >= 1; j--)
        {
            cout<<"*";
        }
       
        count += 2;

        cout<<"\n";
    }


}