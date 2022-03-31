#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, j;
    string s;
    cin >> s;

    for (i = 0; i < s.length(); i += 2)
    {
        for (j = 0; j < s.length() - 1; j += 2)
        {
            if (s[j] > s[j + 2])
            {
                swap(s[j], s[j + 2]);
            }
        }
    }
    cout << s;
}