//Solution Date 29/08/25
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        bool numberIsPresent = false;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==k) 
            {
                numberIsPresent = true;
                break;
            }
        }
        
        if(numberIsPresent) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}
