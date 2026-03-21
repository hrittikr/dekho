#include <iostream>
using namespace std;
int main(){
    int k=0, l=-1, p,q;
    cout<<"enter the number to be searched:";
    cin>>p;
    int arr[n];
    cin>>n;
    cout<<"enter the elements of array: ";
    cin>>q;
    while(l==-1 && k<n)
    {

        if(arr[k]==p)
        {
            l=k;
        }
        k++;
    }
    if(l==-1)
    {
        cout<<"element not found";
    }
    else
    {
        cout<<"element found at position: "<<l;
    }
}      


         int n;
         cin>>n;
            int arr[n];
            cout<<"enter the elements of array: ";
            for(int i=0; i<n; i++)
            {
                cin>>arr[i];
            }