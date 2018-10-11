#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int arr[b+1][a+1];
        string str1,str2;
        cin>>str1>>str2;
        for(int i=0;i<a+1;i++)
            arr[0][i]=0;
        for(int i=0;i<b+1;i++)
            arr[i][0]=0;
        for(int i=1;i<a+1;i++)
        {
            for(int j=1;j<b+1;j++)
            {
                if(str2[j-1]==str1[i-1])
                    arr[j][i]=arr[j-1][i-1]+1;
                else
                {
                    arr[j][i]=max(arr[j][i-1],arr[j-1][i]);
                }
            }
        }
        cout<<arr[b][a]<<endl;
    }
    return 0;
}
