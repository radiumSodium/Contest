#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
int main()
{
    int n, size, i;
    int num;
    cin >> num >> n;
    for (i = 0; i < n; i++)
    {
        if (num % 10 == 0)
        {
            num = (num / 10);
        }
        else
            num = num - 1;
    }
    printf("%d", num);

    return 0;
}