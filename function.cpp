
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
#include <iostream> 
using namespace std;
void area(float r){
    cout<<"The area of circle is: "<<3.14*r*r<<endl;
} 
int main(){
    float radius = 5;
    area(radius);
    return 0;
}



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
