#include <iostream>
#include <set>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the number of elements in the set: ";
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    set <int> mySet;
    for(int i=0;i<N;i++){
        mySet.insert(arr[i]);
    }
    cout << "Elements in the set: ";
    for(auto it = mySet.begin(); it != mySet.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}