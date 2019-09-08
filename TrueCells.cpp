#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int res=0;
        map<long long int, long long int> x,y;
        while(n--)
        {
            long long int a,b;
            cin>>a>>b;
            res=res+x[a+b];
            x[a+b]++;
            res=res+y[a-b];
            y[a-b]++;
        }
        cout<<res<<endl;
    }
    return 0;
}
