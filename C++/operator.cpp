#include <iostream>
using namespace std;

// int main()
// {
//     int cups;
//     int pricePerCup, totalPrice, discountedPrice;

//     cout << "Enter the number of tea cups: ";
//     cin >> cups;
//     cout << "Enter the price per cups: ";
//     cin >> pricePerCup;

//     totalPrice = cups * pricePerCup;

//     // apply 5% discount if total price is above 100

//     if (totalPrice > 100)
//     {
//         discountedPrice = totalPrice - (totalPrice * 0.05);
//         cout << "Discounted price is: " << discountedPrice << endl;
//     }
//     else
//     {
//         cout << "Total price is: " << totalPrice << endl;
//     }
//     return 0;
// }

// 2. Assignment Operator
// int main()
// {
//     int teaBags;
//     cout << "Enter the number of tea bags you have: ";
//     cin >> teaBags;

//     if (teaBags < 10)
//     {
//         teaBags += 5;
//     }
//     cout << "Your total bags are: " << teaBags;

//     return 0;
// }

// 3. Relational Operator
// int main()
// {
//     int teaCups;
//     cout << "Enter the number of teacups you have: ";
//     cin >> teaCups;

//     if (teaCups > 20)
//     {
//         cout << "You will get a GOLD Badge" << endl;
//     }
//     else if (teaCups >= 10 && teaCups <= 20)
//     {
//         cout << "You will get a SILVER Badge" << endl;
//     }
//     else
//     {
//         cout << "No Badge for you" << endl;
//     }
//     return 0;
// }

// 4. Logical Operator
int main()
{
    bool isStudent;
    int cups;

    cout << "Are you a student (1 for yes and 0 for No) ?";
    cin >> isStudent;
    cout << "How many cups of tea have you purchased ?";
    cin >> cups;

    if (isStudent || cups > 15)
    {
        cout << "You are eligible for the discount" << endl;
    }
    else
    {
        cout << "You are not eligible for the discount" << endl;
    }
    return 0;
}
