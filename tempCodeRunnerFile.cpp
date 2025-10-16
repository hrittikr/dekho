

#include <iostream>
using namespace std;

int main()
{
    int day;
    cout<<"enter a day of the week:";
    cin>>day;
    switch (day)
{
    case 1:
    cout<<"Monday\n:";
    break;
    case 2:
    cout<<"Tuesday\n:";
    break;
    case 3:
    default:
    cout<<"invalid input! Please enter a number between 1 and 3.\n";
    
}

    return 0;
}