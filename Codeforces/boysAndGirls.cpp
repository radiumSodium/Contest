
#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
using namespace std;
int main()
{
    string word;
    cin >> word;
    int count = 0;
    sort(word.begin(), word.end());
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] != word[i + 1])
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    // cout << count;
}