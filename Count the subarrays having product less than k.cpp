#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main()
{
    ull t;
    cin>>t;
    while(t--)
    {
        ull n,k;
        cin>>n>>k;
        ull arr[n],countt=0;
        for(ull i=0;i<n;i++)
            cin>>arr[i];
        ull pro=1,j=0,i;
        for(i=0;i<n;i++)
        {
            pro=pro*arr[i];
            if(j<n&&pro>=k)
            {
                //cout<<arr[j]<<"  "<<arr[i]<<endl;
                countt=countt+(i-j);
                if(i!=j){

                    pro=pro/(arr[j]*arr[i]);
                    i--;
                }
                else
                    pro=pro/arr[j];
                //cout<<"pro= "<<pro<<endl<<"Count= "<<countt<<endl;
                j++;
            }
        }
        if(j<n)
        {
            while((i-j)!=0)
            {
                countt=countt+(i-j);
                j++;
            }
        }
        cout<<countt<<endl;
    }
}
