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
  
  
  
  // write two program of string in c++
  // compare two string are they equal or not
  #include <iostream>
  using namespace std;
  int main(){
     string s1,s2;
     cin>>s1>>s2;
     
     if(s1==s2)
     {
       cout<<"Equal";
     }
     else
     {
       cout<<"Not Equal";
     }
  }

  // concatenate two string
  #include <iostream>
  using namespace std;
  int main(){ 
      string s1,s2;
      cin>>s1>>s2;
      
      cout<<s1+s2;
    }
// 2.
  // concatenate two string
  #include <iostream>
    
  using namespace std;
  int main(){ 
      string s1,s2;
      cin>>s1>>s2;
      
      cout<<s1+s2;
    }

    // write a program in c++ whether the substring is present or not 
    #include <iostream>
    using namespace std;
    int main(){
      string s1="Hello To World";
      string s2="To";
      int pos = s1.find(s2);
      int pos1 = s1.find("XYZ");
      int pos2 = s1.find("Hello");
      cout<<"pos";
      
    }


    // pattern 
    #include <iostream>
    using namespace std;
    int main(){
      int n=6;
      for(int i =0; i<6; i++){
    
      for(int s=0; s<6-i; s++){
        cout<<" ";
      }
      for(int j=0; j<6; j++){
        cout<<"* ";
      }
      cout<<endl;
      }
      return 0;
    }

  
  