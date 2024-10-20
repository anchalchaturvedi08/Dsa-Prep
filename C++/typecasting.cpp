#include <iostream>
using namespace std;

int main()
{
    float teaPrice = 280.9;
    int roundedTeaPrice = (int) teaPrice;

    int teaQuuantity = 2;
    int totalPrice = teaPrice * teaQuuantity;

    cout << totalPrice << endl;
    
    return 0;
}