//Solution Date 03/09/25
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
            
        if(!is_sorted(arr.begin(),arr.end())) cout<<"0"<<endl;
        else
        {
            int diff = INT_MAX;
            for(int i=0;i<n-1;i++)
            {
                diff = min(diff, arr[i+1]-arr[i]);
            }
            if(diff == 0) cout<<"1"<<endl;
            else cout<<(diff/2)+1<<endl;
        }
    }
    return 0;
}
