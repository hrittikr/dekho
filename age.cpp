#include <iostream>
using namespace std;   
int main(){
    int age;
    cout<<"enter the value of age:";
    cin>>age;
    if(age>=18)
    {
        if(age>=18 && age<=65)
        {
            cout<<"age is adult:";
        }
        else
        {
            cout<<"age is senior citizen:";
        }
    }
    else
    {
        cout<<"age is minor:";
    }
    return 0;

}