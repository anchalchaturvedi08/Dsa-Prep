#include <iostream>
#include <string>
using namespace std;

int main()
{
    //1.if the user wants to order green tea
    string teaOrder;

    cout << "Enter your tea order: ";
    getline(cin, teaOrder);

    if (teaOrder == "Green Tea")
    {
        cout << "You have ordered Green Tea" << endl;
    }
    else
    {
        cout << "Unknown tea order" << endl;
    }
    
    return 0;
}