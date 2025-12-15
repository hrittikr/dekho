// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	string s,p;
// 	cin>>s;
// 	cin.ignore();
// 	getline(cin,p);
// 	cout<<s<<p;

// }


// #include <iostream>
// using namespace std;
// int main(){
//   int N,K;
//   cin>>N>>K;
//   string s;
//   cin>>s;
  
//   cout<<s.substr(K,N-2*K);
// }


// transform string
// #include <iostream>
// using namespace std;
// int main()
// {
//   string s;
//   cin>>s;
//   // if(isdigit(s[3]));
//   if(isalpha(s[0]))
//   {
//     cout<<"Yes Is A Digit";
//   }
   
// }


#include <iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   
   string r="", sc="";
   
   for(int i=0; i<n;i++)
   {
     if(isalpha(s[i]))
     {
       s[i]=tolower(s[i]);
       r=r+s[i];
     }
     else if(isdigit(s[i]))
     {
      r=r+s[i];
     }
     else
     {
       sc=sc=s[i];
     }
   
   }
   cout<<r+sc;

}
  
  
  
  
  
  
  
  
  
  
  