// #include <iostream>
// using namespace std;
// int main(){
//     v.push_back(10);
//     v.push_back(50);
//     v.insert(v.begin+2, 5);
//     v.pop_back();
//     v.pop_back(4);
// return 0;
// }




#include <iostream>
using namespace std;
int main(){
    
    for(int i=1; i>=5; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<"*"<<endl;
    }
    return 0;
}