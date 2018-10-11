#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int w=0;w<t;w++)
    {
        int n;
        cin>>n;
        char arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            for(int j=0;j<=i;j++)
            {
                int countt=0;
                for(int k=0;k<=i;k++)
                {
                    if(k!=j&&arr[j]!=arr[k])
                        countt++;
                }
                if(countt==i)
                {
                    cout<<arr[j]<<" ";
                    break;
                }
                else if(j==i)
                    cout<<"-1 ";
            }
        }
        cout<<endl;
    }
    return 0;
}
