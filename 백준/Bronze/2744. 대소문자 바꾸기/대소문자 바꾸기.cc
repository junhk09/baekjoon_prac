#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str;
    getline(cin, str);

    for (int i = 0; i < str.length(); ++i)
    {
        if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
        else
        {
            str[i] = toupper(str[i]);
        }
    }

    cout << str;

    return 0;
}
