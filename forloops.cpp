// #include <iostream>
// using namespace std;   
// int main(){
//     int num;
//     cout<<"enter the number;";
//     cin>>num;
//     for(int i=1;i<=10;i++)
//     {
//         cout<< num * i << endl;
//     }
//     return 0;

// }
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cin>>marks;
    if(marks>=90)
    {
    cout<<"A+"<<endl;
    }
    else if (marks>=80) 
    {
    cout<<"A"<<endl;
    }
    else if (marks>=70) 
    {
    cout<<"pass"<<endl;
    }
    else
    cout<<"Fail"<<endl;
    return 0;
}    
    