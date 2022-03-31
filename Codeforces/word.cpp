#include <iostream>
#include <string>
using namespace std;
int main()
{
    int countLow = 0, countUp = 0;
    string word;

    cin >> word;
    for (int i = 0; i < word.size(); i++)
    {
        if (isupper(word[i]))
        {
            countUp++;
        }
        else
        {
            countLow++;
        }
    }

    if (countUp > countLow)
    {

        for (int i = 0; i < word.size(); i++)
        {
            word[i] = toupper(word[i]);
        }
        cout << word << endl;
    }
    else if (countUp < countLow)
    {

        for (int i = 0; i < word.size(); i++)
        {
            word[i] = tolower(word[i]);
        }
        cout << word << endl;
    }
    else
    {

        for (int i = 0; i < word.size(); i++)
        {
            word[i] = tolower(word[i]);
        }
        cout << word << endl;
    }
}
