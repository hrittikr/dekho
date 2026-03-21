// #include <iostream>
// using namespace std;
// int main(){
//     vector <int> v;
//     cout<<"Enter the no. of elements in the vector:";
//     cin>>n;
//     cout<<"Insert the elements in the vector:";
//     for(int i=0; i<n; i++)
//     {
//         cin>>v[i];
//     }
// }


// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector <int> v;
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector <int> v;
//     int x,n;
//     cin>>n
//     for(int i=0; i<n; i++)
//     {
//         cin>>x;
//         v.push_back(x);
//     }
//     for(int i=0; i<n; i++){
//         cout<<v[i]<<" ";
//     }
// }


#include <iostream>
#include <vector>
using namespace std; 
int main(){
    vector <int> v={10,20,30,40,50};
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<v[v.size()-1];
    // cout<<v.at(i);
    // cout<<v.front();
    // cout<<v.back();
    return 0;
}   



// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector <int> v;
//     int x,n;
//     cin>>n
//     for(int i=0; i<n; i++)
//     {
//         cin>>x;
//         v.push_back(x);
//     }
//     for(int i=0; i<n; i++){
//         cout<<v[i]<<" ";
//     }
// }

// #include <iostream>
// #include <vector>
// using namespace std; 
// int main(){
//     vector <int> v={10,20,30};
//     int *i;
//     for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     // cout<<v[i];
//     cout<<v.at(*i);
//     // cout<<v.front();
//     // cout<<v.back();
//     return 0;
// }   


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vecor <int>v={10,20,30};
//     for(auto i=v.begin(); i!=v.end(); i++)
//     {
//         cout<<+i<<endl;
//     }
//     cout<<v.(i);
//     return 0;
    
    
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int> v={10,20,30};
    sort(v.begin(), v.end());
    for(int x:v)
    {
        cout<<x<<" ";
    }
}



