//Solution Date 27/08/2025
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin>> testcases;
    
    while(testcases>0)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int> temp(arr.begin(),arr.end());
        sort(temp.begin(), temp.end());
        if(arr==temp) cout<<"YES"<<endl;
        else
        {
            if(k<=1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        testcases--;
    }
    return 0;
}
