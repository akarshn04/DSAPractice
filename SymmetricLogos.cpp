#include <iostream>
using namespace std;
int main(){
    
    int t,n,i,j,flagx,flagy,mid;
    cin >> t;
    while(t--){
        flagx = flagy = 0;
        cin >> n;
        string str[n];
        for(i=0;i<n;i++)
            cin >> str[i];
        if(n%2 == 0)
            mid = n/2;
        else
            mid = (n/2) + 1;
        
        for(i=0;i<mid;i++){
            if(str[i] == str[n-i-1])
                flagx = 1;
            else{
                flagx = 0;
                break;
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<mid;j++){
                if(str[i][j] == str[i][n-j-1])
                    flagy = 1;
                else{
                    flagy = 0;
                    break;
                }
            }
            if(flagy == 0)
                break;
        }
        if(flagx == 1 && flagy == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
