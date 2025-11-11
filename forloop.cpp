// #include <iostream>
// using namespace std;

// int main() {
//     int n=7;
//     for(int i=1; i<=6;i++)
//     {
//     for(int j=1; j<=n-i; j++)
//     {
//         cout<<j<<"    ";
    
//     }
//     cout<<endl;
//     }
//     return 0;

// }





// #include <iostream>
// using namespace std;

// int main() {

//    for(int i=1; i<=23; i++){
//        if(i==3)
//        {
//            continue;
//        }
//        cout<<i<<endl;
//    }
//    return 0;
    
// }



#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1)
    cout<<"Monday";
    else if(n==2)
    cout<<"Tuesday";
    else if(n==3)
    cout<<"Wednesday";
    else
    cout<<"invalid I/P";


    return 0;
}