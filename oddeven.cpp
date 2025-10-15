/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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