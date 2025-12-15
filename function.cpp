
// #include <iostream>
// using namespace std;

// void sum(int n1, float n2){
//     cout<<"The div of the number is "<<n1/n2<<endl;
//     cout<<"The product of the number is "<<n1*n2<<endl;
//     cout<<"The sub of the number is "<<n1-n2<<endl;
//     cout<<"The sum of the number is "<<n1+n2;
// }
// int main(){
//     int n1 =15;
//     int n2 = 3;
//     sum(n1,n2);
//     return 0;
// }


// #include <iostream>
// using namespace std;
// void hrittik(string msg){
//     cout<<"Hello Hii "<<endl<<msg<<endl;
// }
// int main()
// {
//     hrittik("How are you?");
//     return 0;
    
// }


// #include <iostream>
// using namespace std;
// void hello(){
//     cout<<"Hello World!"<<endl;
// }
// int square(int n){
//     return n*n;
// }
// int main()
// { 
//     hello();
//     int result=square(5);
//     cout <<"square of 5 is:"<<result;
//     return 0;
// }



// #include <iostream>
// using namespace std;
// void hello(){
//     cout<<"hello world"<<endl;
// }
// int quad(int n){
//     return n*n*n*n*n;
// }
// int main(){
//     hello();
//     int result=quad(5);
//     cout <<"square of 5 is: "<<result;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// void displayNum(int n1, float n2) {
//     cout << "The int number is " << n1;
//     cout << "The double number is " << n2;
// }

// int main() {
     
//      int num1 = 5;
//      double num2 = 5.5;
//     displayNum(num1, num2);

//     return 0;
// }




// #include <iostream>
// using namespace std;
//  int add(int a, int b)
//  {
//      return a+b;
//  }
//  int main()
//  {  
//     int sum ,a,b;
//     cout<<"Enter two numbers: ";
//     cin>>a>>b;
//     sum=add(a,b);
//     cout<<"a+b="<<sum;
//     return 0;
//  }


//call by value:-
//write a program to display one integer and one float number using a function.

// #include <iostream>
// using namespace std;
// void display(int n1, float n2){
//     cout<<"The integer number is "<<n1<<endl;
//     cout<<"The float number is "<<n2<<endl;
// }
// int main(){
//     int num1 = 10;
//     float num2 = 10.5;
//     display(num1, num2);
//     return 0;
// }


// find area of rectangle using call by value.

// #include <iostream>
// using namespace std;
// void area(int l, int b){
//     cout<<"The area of rectangle is "<<l*b<<endl;
// }
// int main(){
//     int length = 5;
//     int breadth = 10;
//     area(length, breadth);
//     return 0;
// }

//by using call by value find the area of circle.
// #include <iostream> 
// using namespace std;
// void area(float r){
//     cout<<"The area of circle is: "<<3.14*r*r<<endl;
// } 
// int main(){
//     float radius = 5;
//     area(radius);
//     return 0;
// }

// #include <iostream> 
// using namespace std;
// float area(float r){
//     return 3.14*r*r;
// } 
// int main(){
//     int result ;
//     float radius = 5;
//     result = area(radius);
//     cout << "The area of circle is: " << area(radius) << endl;
//     return 0;
// }


//What is call by address:-
//ans- call by address is used when we want to modify a variable inside and outside the function.
//syntex:-
//return_type function_name(data_type *parameter_name){
//     //function body or modification
// }

// #include <iostream>
// using namespace std;
// void changevalue (int *p)
// {
//     *p = *p+10;
//     cout<<"Pointervalue:"<<*p<<endl;
// }
// int main(){
//     int num;
//     cout<<"enter the value:";
//     cin>>num;
//     cout <<"original value:"<<num<<endl;
//     cout<<"new value:"<<num+10<<endl;
// }


// call by reference:-
//same as call by address but in this we use reference operator(&) in function parameter.

// #include <iostream>
// using namespace std;
// void changevalue (int &p)
// {
//     p = p+10;
//     cout<<"Reference value:"<<p<<endl;
// }
// int main(){
//     int num;
//     cout<<"enter the value:";
//     cin>>num;
//     cout <<"original value:"<<num<<endl;
//     cout<<"new value:"<<num+10<<endl;
// }

// write a program to swap two numbers using call by reference.

// #include <iostream>
// using namespace std;
// void swap(int &a, int &b){
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;

// }
// int main(){
//     int num1, num2;
//     cout<<"Enter two numbers: ";
//     cin>>num1>>num2;
//     swap(num1, num2);
//     cout<<"After swapping: "<<endl;
//     cout<<"num1: "<<num1<<endl;
//     cout<<"num2: "<<num2<<endl;
//     return 0;
// }

// // write a program to increase the marks of two subjects by 5 using call by reference.
// #include <iostream>
// using namespace std;
// void increasemarks(int &subj1 , int &sub2)
// {
//     subj1 = subj1+5;
//     subj2 = sub2+5;

// }

// int main(){
//     int marks1,marks2;
//     cout<<"enter the marks of the two subjects: ";
//     cin>>marks1>>marks2;
//     increasemarks(marks1,marks2);
//     cout<<"the new marks of the subject 1 is: "<<marks1<<endl;
//     cout<<"the nuw marks of the subject 2 is: "<<marks2<<endl;
//     return 0;
// }

// write a program to find the maximum number between two numbers using call by reference.
// #include <iostream>
// using namespace std;
// void maximum(int &a, int &b){
//     if(a > b){
//         cout<<"Maximum number is: "<<a<<endl;
//     }
//     else{
//         cout<<"Maximum number is: "<<b<<endl;
//     }
// }
// int main(){
//     int num1, num2;
//     cout<<"Enter two numbers: ";
//     cin>>num1>>num2;
//     maximum(num1, num2);
//     return 0;
// }


// recursion in c++:-
// #include <iostream>
// using namespace std;
// int fact(int n){
//     if(n==0 )
//     {
//         return 1;
//     }
//     else{
//         return n*fact(n-1);
//     }   
// }
// int main(){
//     int number;
//     cout<<"Enter a number to find factorial: ";
//     cin>>number;
//     int result = fact(number);
//     cout<<"Factorial of "<<number<<" is: "<<result<<endl;
//     return 0;
// }


// how to run in terminal:

// g++
// g++ name of the file.cpp
// .\a.exe

// simple program to print a string by using a array function.
// simple program to print a string by using a array function.
// #include <iostream>
// using namespace std;
// int main (){
//     char hrittik[20];
//     cout<<"Enter your name: ";
//     cin.getline(hrittik,20);
//     cin>>hrittik;
//     cout<<"My Name:"<<hrittik<<endl;
//     return 0;
// }

// string handling in c++:-
// string length - to find the length of string.
// string concat - to concatenate two strings.
// string copy - to copy one string to another string.
// string compare - to compare two strings.
// #include <iostream>
// using namespace std;
// int main(){
//     char str[20];
//     cout<<"enter the string: ";
//     cin.getline(str,20);
//     cout<<"length:"<<strlen(str)<<endl;
//     return 0;   
// }

// #include <iostream>
// #include <cstring>
// using namespace std;
// int main ()
// {
//   char str1[5];
//   char str2[6];
//   cout<<"enter the str1:"<<endl;
//   cin>>str1;
//   cout<<"enter the str2:"<<endl;
//   cin>>str2;

//   if(strcmp(str1,str2)==0);
  
//   {
//     cout<<"Both the string are equal:";
//   }
//   else
//   {
//     cout<<"both the string are not equal:";
//   }
//   return 0;

// }



// write a program in c++ to swap the 1st , 3rd and 5th letter of two names.
// #include <iostream>
// using namespace std;
// void swap(char &a, char &b){
//     char temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
// int main(){
//     char name1[20], name2[20];
//     cout<<"Enter first name: ";
//     cin>>name1;
//     cout<<"Enter second name: ";
//     cin>>name2;

//     swap(name1[0], name2[0]);
//     swap(name1[2], name2[2]);
//     swap(name1[4], name2[4]);

//     cout<<"After swapping:"<<endl;
//     cout<<"First name: "<<name1<<endl;
//     cout<<"Second name: "<<name2<<endl;

//     return 0;
// }




// Write a program in c++ using a function to pass the arguments with return value?
// #include <iostream>
// using namespace std;

// void sum(int n1, float n2){
//     cout<<"The div of the number is "<<n1/n2<<endl;
//     cout<<"The product of the number is "<<n1*n2<<endl;
//     cout<<"The sub of the number is "<<n1-n2<<endl;
//     cout<<"The sum of the number is "<<n1+n2;
// }
// int main(){
//     int n1 =15;
//     int n2 = 3;
//     sum(n1,n2);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void sum(int n1, float n2){
//     cout<<"the sum of the number is "<<n1+n2<<endl;
//     return;
// }
// int main(){
//     int n1=20;
//     int n2 =6.5;
//     sum(n1,n2);
//     return 0;
// }

// write a program in c++ to find minimum and maximum elements of array.
// sample input- 5
//               12345

// sample output-1 2 

#include <iostream>
using namespace std;
int main (){
    int x;
    int y;
    int arr[20];
    cout << " enter the number of elements in array: ";
    cin>>x;
    for(int i=1; i<=n; i++)
    {
        cout<<"enter the elements of array: ";
        cin>>arr[i];
    }
    if{arr[0]>arr[i]}
    {
        y=arr[0];
    }
    else
    {
        y=arr[i];
        }
    }

    // write in c++ using string to count the vowels in a given string.
    #include <iostream>
    using namespace std;

    int main(){
        string str;
        int count = 0;
        cout<<"Enter a string: ";
        getline(cin, str);
        for(int i=0; i<str.length(); i++){
            char ch = tolower(str[i]);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                count++;
            }
        }
        cout<<"Number of vowels in the string: "<<count<<endl;
        return 0;
    }


    // write a program in c++ using string to find the length of string, copy of string, concatation of a string.
    #include <iostream>
    #include <cstring>
    using namespace std;
    int main(){
        char str1[20], str2[20], str3[40];
        cout<<"Enter first string: ";
        cin.getline(str1, 20);
        cout<<"Enter second string: ";
        cin.getline(str2, 20);

        // Length of string
        cout<<"Length of first string: "<<strlen(str1)<<endl;
        cout<<"Length of second string: "<<strlen(str2)<<endl;

        // Copy of string
        strcpy(str3, str1);
        cout<<"Copy of first string: "<<str3<<endl;

        // Concatenation of strings
        strcat(str1, str2);
        cout<<"Concatenation of both strings: "<<str1<<endl;

        return 0;
    }

    // write a program in c++ using string to print in reverse order.
    #include <iostream>
    #include <cstring>
    using namespace std;
    int main(){
        char str[20];
        cout<<"Enter a string: ";
        cin.getline(str, 20);
        cout<<"Reverse of the string: ";
        for(int i=strlen(str)-1; i>=0; i--){
            cout<<str[i];
        }
        cout<<endl;
        return 0;
    }
