#include <iostream>
using namespace std;

int main() {
    // Syntax of For Loop
    for (int i = 0; i < 5; i++) {
        cout << "Loop iteration: " << i + 1 << "\n";
    }

    // Print numbers from 1 to 5
    for (int i = 1; i <= 5; i++) {
        cout << i << "\n";
    }

    // Print squares from 1 to n
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Square of " << i << " is " << i * i << "\n";
    }

    // Print CoderArmy 10 times
    for (int i = 0; i < 10; i++) {
       cout << "CoderArmy\n";
    }

    // Print "n" natural numbers
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << "\n";
    }

    // Print squares
    for (int i = 1; i <= n; i++) {
        cout << "Square of " << i << " is " << i * i << "\n";
    }

    // Print all even numbers up to 20
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            cout << i << "\n";
        }
    }

    return 0;
}
