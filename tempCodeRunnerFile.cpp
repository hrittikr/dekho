

#include <iostream>
using namespace std;


int main(){
    int number , remainder;
    cout<<"enter the integer number:";
    cin>>number;
    remainder = number % 2;
    
    if(remainder==0)
    {
        cout<<"number is even:";
    }
    
    else
    {
        cout<<"number is odd:";
    }

    return 0;
}