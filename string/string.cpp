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


// #include <iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    string s;
//    cin>>s;
   
//    string r="", sc="";
   
//    for(int i=0; i<n;i++)
//    {
//      if(isalpha(s[i]))
//      {
//        s[i]=tolower(s[i]);
//        r=r+s[i];
//      }
//      else if(isdigit(s[i]))
//      {
//       r=r+s[i];
//      }
//      else
//      {
//        sc=sc=s[i];
//      }
   
//    }
//    cout<<r+sc;

// }
  
  
  
//   // write two program of string in c++
//   // compare two string are they equal or not
//   #include <iostream>
//   using namespace std;
//   int main(){
//      string s1,s2;
//      cin>>s1>>s2;
     
//      if(s1==s2)
//      {
//        cout<<"Equal";
//      }
//      else
//      {
//        cout<<"Not Equal";
//      }
//   }

//   // concatenate two string
//   #include <iostream>
//   using namespace std;
//   int main(){ 
//       string s1,s2;
//       cin>>s1>>s2;
      
//       cout<<s1+s2;
//     }

// // 2.
//   // concatenate two string
//   #include <iostream>
    
//   using namespace std;
//   int main(){ 
//       string s1,s2;
//       cin>>s1>>s2;
      
//       cout<<s1+s2;
//     }

//     // write a program in c++ whether the substring is present or not 
//     #include <iostream>
//     using namespace std;
//     int main(){
//       string s1="Hello To World";
//       string s2="To";
//       int pos = s1.find(s2);
//       int pos1 = s1.find("XYZ");
//       int pos2 = s1.find("Hello");
//       cout<<"pos";
      
//     }


//     // pattern 
//     #include <iostream>
//     using namespace std;
//     int main(){
//       int n=6;
//       for(int i =0; i<6; i++){
    
//       for(int s=0; s<6-i; s++){
//         cout<<" ";
//       }
//       for(int j=0; j<6; j++){
//         cout<<"* ";
//       }
//       cout<<endl;
//       }
//       return 0;
//     }


//     #include <iostream>
//     using namespace std;
//     int main(){
//       int n=6;
//       for(int i =0; i<6; i++){
    
//       for(int s=0; s<6-i; s++){
//         cout<<" ";
//       }
//       for(int j=0; j<6; j++){
//         cout<<j+1 ;
//       }
//       cout<<endl;
//       }
//       return 0;
//     }







//  write a program to print a matrix of order 2*2 
    // #include <iostream>
    // using namespace std;
    // int main(){
    //   int matrix[2][2];
    //   for(int i=0; i<2; i++){
    //     for(int j=0; j<2; j++){
    //       cin>>matrix[i][j];
    //     }
    //   }
    //   cout<<"Matrix is:"<<endl;
    //   for(int i=0; i<2; i++){
    //     for(int j=0; j<2; j++){
    //       cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    //   }
    //   return 0;
    // }

    // // print a simple matrix of order 2*2 
    // #include <iostream>
    // using namespace std;
    // int main(){
    //   int matrix[2][2]={{1,2},{3,4}};
      
    //   cout<<"Matrix is:"<<endl;
    //   for(int i=0; i<2; i++){
    //     for(int j=0; j<2; j++){
    //       cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    //   }
    //   return 0;
    // }


// #include <iostream>
// using namespace std;

//    string str="hrittik";
//    void reversestring(string &s){
//    int st=0, end=s.size()-1;
   
//    while(st<end){
//        swap(s[st++],s[end--]);
//    }
  
//    }
//     int main(){
//         string str="hrittik";
//          reversestring(str);
//          cout<<str;
// }

// // WAP in c++ using a function to display the text message.
// #include <iostream>
// using namespace std;

// void displaymessage(){
//     cout<<"Hello Our DSA Teacher is the best teacher in this planet.";

// }
// int main(){
//     displaymessage();
// }

// reverse of string 

#include <iostream>
// #include <string>
using namespace std;

bool isAlphaNum(char ch){
    if((ch >= "0" && ch <= "9") ||
     (tolower(ch) >= "a" && tolower(ch) <= "z")){
        return true;
    }
    return false;
    }
bool isPalindrome(string s){
    int st=0,end= s.length()-1;
    
    while(st < end){
        if(!isAlphaNum(s[st])){
            st++; continue;
        }
        if(!isAlphaNum(s[end])){
            end--; continue;
        }
        if(tolower(s[st]) !=tolower(s[end])){
            return false;
        }
        st++; end--;
        }
        return true;
        
}
int main(){
    string str;
    cout<<"Enter the string:";
    getline(cin,str);

    if(isPalindrome(str))
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";
}
