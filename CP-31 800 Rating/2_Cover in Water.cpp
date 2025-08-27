//Solution Date27/08/2025
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> arr;
        arr.push_back(0);
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            arr.push_back(val);
        }
        arr.push_back(x);
        n = arr.size();
        int max_distance = INT_MIN;
        for(int i=1;i<n;i++)
        {
            if(i==n-1)
            {
                max_distance = max(max_distance, 2*(arr[i]-arr[i-1]));
            }
            else
            {
                max_distance = max(max_distance, arr[i]-arr[i-1]);
            }
        }
        cout<<max_distance<<endl;
        
    }
}
