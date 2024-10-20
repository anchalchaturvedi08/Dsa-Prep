// 1.Tea info display
#include<iostream>
using namespace std;

int main() {
    string teaType = "Green Tea";
    float priceperKg = 12.5;
    char rating = 'A';

    cout << "Tea Information:" <<endl;
    cout << "Type: \"" << teaType << "\"" << endl;
    cout << "Price per Kilogram: $" << priceperKg << endl;
    cout << "Rating: " << rating << endl;
    return 0;
}

// 2.Modify Tea Prices
#include <iostream>
using namespace std;

int main()
{
    float teaPrice = 13.7;
    float newPrice = teaPrice * 1.10; // increase price by 10%

    // If you want to round the new price before printing
    int roundedNewPrice = (int)(newPrice); // rounding the new price to integer
    cout << "The new price after a 10% increase is: $" << roundedNewPrice << endl;

    // If you want to print the new price as is, with decimals
    cout << "The new price after a 10% increase is: $" << newPrice << endl;

    return 0;
}

// 3.Favorite tea input
#include<iostream>
#include<string>
using namespace std;

int main() {
    string favoriteTea;
    int cups;

    cout << "Enter your favorite tea: ";
    getline(cin, favoriteTea);

    cout << "How many cups of tea would you like? ";
    cin >> cups;

    cout << "You have chosen " << cups << " cups of " << favoriteTea << ". Enjoy your tea!" <<endl;

    return 0;
}