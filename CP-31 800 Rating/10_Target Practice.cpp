//Solution Date 30/08/25
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int score = 0;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                char ch;
                cin>>ch;
                if(ch=='X')
                {
                    int k = i,l=j;
                    if(k>=5) k=10-i-1;
                    if(l>=5) l=10-j-1;
                    score+=min(k+1,l+1);
                }
            }
        }
        cout<<score<<endl;
    }
}
