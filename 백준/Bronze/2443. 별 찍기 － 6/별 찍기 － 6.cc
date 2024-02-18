#include <iostream>
using namespace std;

int main() {
    int N, count = 1;
    cin >> N;

    for (int i = 0; i < N; i++)
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