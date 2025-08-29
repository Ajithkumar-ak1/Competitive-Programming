//Solution Date 29/08/25
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
        
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        map<int,int>frequency_map;
        for(int i=0;i<n;i++)
        {
            frequency_map[arr[i]]++;
        }
        if(frequency_map.size()>=3)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int freq1 = frequency_map.begin()->second;
            int freq2 = frequency_map.rbegin()->second;
            
            if(freq1 == freq2) cout<<"YES"<<endl;
            else if(n%2==1 && abs(freq1-freq2)==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
