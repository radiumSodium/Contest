#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, i, counter = 0;
    string s;

    cin >> n;
    cin >> s;
    for (i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            counter++;
        }
    }
    cout << counter << endl;
}