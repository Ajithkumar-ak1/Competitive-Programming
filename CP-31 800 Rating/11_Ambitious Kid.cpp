//Solution Date 31/08/25
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    
    int res = INT_MAX;
    bool hasZero= false;
    for(int val:arr)
    {
        if(val==0){
            hasZero = true;
            break;
        }
        res = min(res,abs(0-val));
    }
    if(!hasZero) cout<<res<<endl;
    else cout<<0<<endl;
    return 0;
}
