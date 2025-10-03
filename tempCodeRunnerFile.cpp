#include<iostream>
using namespace std;

    int first_number , second_number , sum ;
    
int main(){
    int a = 20;
    int b = 15;

    cout <<(a+b)<<endl;
        cout <<(a-b)<<endl;
        
    cout <<(a*b)<<endl;
    cout <<(a/b)<<endl;


    cout <<(a>b && a<b)<<endl;
    cout <<(a>b || a<b)<<endl;


    cout <<"enter the numbers";
    cin >> first_number >> second_number;
    cout << first_number <<"+" <<second_number<<"="<<sum<<endl;
    


    return 0;

}