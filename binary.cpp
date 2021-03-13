#include<iostream>
using namespace std;
int main()
{
    int A[5],i,key,mid,l,h;
    l=0;
    h=4;
    cout<<"enter the element of array:\n";
    for(i=0;i<5;i++)
    {
        cin>>A[i];
    }
    cout<<"key element: ";
    cin>>key;
    while (l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
        {
            cout<<"found at:"<<mid;
            return 0;
        }
        else if(key<A[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<"element not found";
    return 0;
}