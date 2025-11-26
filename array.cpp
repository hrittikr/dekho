
// *** array basics ****


// #include <iostream>
// using namespace std;

// int main()
// {
//     int a[5]={10,20,30,40,50};
//     cout<<"enter the elements of array";
//     for(int i=0; i<=4; i++)
//     {
//         cout<<a[i];
        
//     }
//     {
//     cout<<endl;}
    

//     return 0;
// }



// **** reverse array ****

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a[5]={10,20,30,40,50};
//     cout<<"enter the elements of array"<<endl;
//     int n=5;
//     for(int i=n-1 ; i>=0; i--)
//     {
//         cout<<a[i]<<endl;
        
//     }

//     return 0;
// }


// ***matrix basics****

#include <iostream>
using namespace std;
 int main()
{
     int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
     {
     for(int i=0; i<=2; i++)
     {
         for(int j=0; j<=2; j++)
     {
         cout<<a[i][j]<<"  ";
     }
     cout<<endl;
     }
     }
     return 0;
}