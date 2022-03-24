#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,i,j,k;
    vector<int> ar;
    scanf("%d",&x);
    bool prime[7400005];
    memset(prime,true,sizeof(prime));
    for(i=2;i<=2721;i++)
    {
        if(prime[i]==true)
            for(j=i*i;j<7400005;j+=i)
        {
            prime[j]=false;
        }
    }
    for(k=2;k<7400005;k++)
    {
        if(prime[k]==true)
        {
            ar.push_back(k);
        }
    }
    printf("%d\n",ar[x-1]);

    return 0;
}
