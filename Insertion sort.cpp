#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,1,5,4,3};
    for(int i=0;i<5;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for(int i=0;i<5;i++)
        cout<<arr[i]<<endl;
}
