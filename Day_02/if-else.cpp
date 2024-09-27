#include <iostream>
using namespace std;

int main() {
    // How to take input from User and How to use cin
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    // Take user input to sum two numbers
    int sum = num1 + num2;
    cout << "Sum: " << sum << "\n";

    // Operators C++
    int a = 10, b = 20;
    cout << "Addition: " << (a + b) << "\n";
    cout << "Subtraction: " << (a - b) << "\n";
    cout << "Multiplication: " << (a * b) << "\n";
    cout << "Division: " << (a / b) << "\n";
    cout << "Modulus: " << (a % b) << "\n";

    // TypeCasting concept
    float c = 9.7;
    int d = (int)c;
    cout << "Original float: " << c << ", After typecasting to int: " << d << "\n";

    // Data Lose concept
    double largeDouble = 1.23456789;
    float smallerFloat = (float)largeDouble;
    cout << "Original double: " << largeDouble << ", After typecasting to float: " << smallerFloat << "\n";

    // TypeCasting Hands-On
    char charVar = 'A';
    int intVar = (int)charVar;
    cout << "Character: " << charVar << ", After typecasting to int: " << intVar << "\n";

    // If-Else condition start
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18) {
       cout << "You are an adult.\n";
    } else {
       cout << "You are a minor.\n";
    }

    // If-Else example with package
    int packageWeight;
    cout << "Enter the package weight: ";
    cin >> packageWeight;
    if (packageWeight <= 5) {
        cout << "The package is light.\n";
    } else if (packageWeight <= 20) {
        cout << "The package is moderate.\n";
    } else {
        cout << "The package is heavy.\n";
    }

    // Mark Grading System
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks >= 90) {
        cout << "Grade: A\n";
    } else if (marks >= 80) {
        cout << "Grade: B\n";
    } else if (marks >= 70) {
        cout << "Grade: C\n";
    } else if (marks >= 60) {
        cout << "Grade: D\n";
    } else {
       cout << "Grade: F\n";
    }

    // Compare two variables
    int x = 5, y = 10;
    if (x > y) {
        cout << "x is greater than y\n";
    } else if (x < y) {
        cout << "x is less than y\n";
    } else {
        cout << "x is equal to y\n";
    }

    // Check number is even or odd
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 2 == 0) {
        cout << "The number is even.\n";
    } else {
        cout << "The number is odd.\n";
    }

    // HomeWork- Voter Eligibility
    int voterAge;
    cout << "Enter your age: ";
    cin >> voterAge;
    if (voterAge >= 18) {
        cout << "You are eligible to vote.\n";
    } else {
        cout << "You are not eligible to vote.\n";
    }

    // Number is positive, negative, zero
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0) {
        cout << "The number is positive.\n";
    } else if (num < 0) {
        cout << "The number is negative.\n";
    } else {
       cout << "The number is zero.\n";
    }

    // Character is Vowel or not
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
       cout << "The character is a vowel.\n";
    } else {
        cout << "The character is not a vowel.\n";
    }

    return 0;
}
