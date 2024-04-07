#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    string b;
    cin >> a;                       //두 단어 입력
    cin >> b;
    if (a.length() >= b.length())    //a가 더 긴경우 go출력
    {
        cout << "go" << endl;
    }
    else                         //아닌경우 no출력
    {
        cout << "no" << endl;
    }
    return 0;
}