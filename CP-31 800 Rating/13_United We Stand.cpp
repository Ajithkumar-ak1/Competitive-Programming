//Solution Date 02/09/25
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
            
        sort(arr.begin(),arr.end());
        
        if(arr[0]==arr[n-1]) cout<<"-1"<<endl;
        else
        {
            vector<int> b;
            vector<int> c;
            b.push_back(arr[0]);
            int i = 1;
            while(arr[i] == b.back()) 
            {
                b.push_back(arr[i]);
                i++;
            }
            while(i<n)
            {
                c.push_back(arr[i]);
                i++;
            }
            cout<<b.size()<<" "<<c.size()<<endl;
            
            for(int i=0;i<b.size();i++) cout<<b[i]<<" ";
            cout<<endl;
            for(int i=0;i<c.size();i++) cout<<c[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
