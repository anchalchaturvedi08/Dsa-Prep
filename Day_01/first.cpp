#include <iostream>

int main() {
    // First code in C++
    std::cout << "Hello, World!\n";

    // Variables and data types
    int integerVar = 5;
    char charVar = 'A';
    float floatVar = 5.99;
    double doubleVar = 9.99;
    bool boolVar = true;

    std::cout << "Integer: " << integerVar << "\n";
    std::cout << "Character: " << charVar << "\n";
    std::cout << "Float: " << floatVar << "\n";
    std::cout << "Double: " << doubleVar << "\n";
    std::cout << "Boolean: " << (boolVar ? "true" : "false") << "\n";

    // Specific data types
    int myInt = 42;
    std::cout << "Integer value: " << myInt << "\n";

    char myChar = 'A';
    std::cout << "Character value: " << myChar << "\n";

    float myFloat = 3.14f;
    std::cout << "Float value: " << myFloat << "\n";

    double myDouble = 3.14159;
    std::cout << "Double value: " << myDouble << "\n";

    bool myBool = true;
    std::cout << "Boolean value: " << (myBool ? "true" : "false") << "\n";

    // Using variables and data types
    int age = 21;
    float height = 5.9f;
    char grade = 'A';
    bool isStudent = true;

    std::cout << "Age: " << age << "\n";
    std::cout << "Height: " << height << "\n";
    std::cout << "Grade: " << grade << "\n";
    std::cout << "Is Student: " << (isStudent ? "true" : "false") << "\n";

    // Negative positive integer storage
    int positiveInt = 10;
    int negativeInt = -10;

    std::cout << "Positive Integer: " << positiveInt << "\n";
    std::cout << "Negative Integer: " << negativeInt << "\n";
}