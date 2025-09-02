//Solution 02/09/25
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
        
        vector<int> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
            
        int sum = 0;
        for(int val:arr) sum+=val;
        if(sum%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}
