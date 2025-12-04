
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
#include <iostream>
using namespace std;
int fact(int n){
    if(n==0 )
    {
        return 1;
    }
    else{
        return n*fact(n-1);
    }   
}
int main(){
    int number;
    cout<<"Enter a number to find factorial: ";
    cin>>number;
    int result = fact(number);
    cout<<"Factorial of "<<number<<" is: "<<result<<endl;
    return 0;
}


// how to run in terminal:
// g++
// g++ function.cpp
// .\a.exe
