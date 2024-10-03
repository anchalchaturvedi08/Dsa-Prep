#include<iostream>
using namespace std;

int main(){
    // post increment
    // int a = 10;
    // int b = a++;
    // cout<<b<<" "<<a;

    // post decrement
    // int a = 10;
    // int b = a--;
    // cout<<b<<" "<<a;

    // pre increment
    // int a = 10;
    // int b = ++a;
    // cout<<b<<" "<<a;

    // pre decrement
    // int a = 10;
    // int b = --a;
    // cout<<b<<" "<<a;


    // comparison operator
    // give ans always in this form 1 or 0
    // int a, b;
    // cout<<"Enter the value of a: ";
    // cin>>a;
    // cout<<"Enter the value of b: ";
    // cin>>b;

    // // ==, >, <, >=, <=, != 

    // if(a==b)
    // cout<<"Yes";
    // else
    // cout<<"No";


    // Logical operator 
    // int a, b, c;
    // cin>>a,b,c;

    // if(a>b&&b>c){
    //     cout<<"Yes";
    // }
    // else{
    //     cout<<"No";
    // }

    // Or
    // char name = 'b';

    // if(name=='a'||name=='e'||name=='i'||name=='o'||name=='u')
    // cout<<"vowel";
    // else
    // cout<<"consonant";

    //  not operatror
    // cout<<!123<<endl;


    // Bitwise Operator
    int a = 5;  // binary: 0101
    int b = 3;  // binary: 0011

    // Bitwise AND
    int andResult = a & b;  // 0101 & 0011 = 0001
    cout << "Bitwise AND of " << a << " and " << b << " is: " << andResult << endl;

    // Bitwise OR
    int orResult = a | b;   // 0101 | 0011 = 0111
    cout << "Bitwise OR of " << a << " and " << b << " is: " << orResult << endl;

    // Bitwise XOR
    int xorResult = a ^ b;  // 0101 ^ 0011 = 0110
    cout << "Bitwise XOR of " << a << " and " << b << " is: " << xorResult << endl;

    // Bitwise NOT
    int notResult = ~a;     // ~0101 = 1010 (in 8 bits, ~00000101 = 11111010)
    cout << "Bitwise NOT of " << a << " is: " << notResult << endl;

    // Left Shift
    int leftShiftResult = a << 1;  // 0101 << 1 = 1010
    cout << "Left shift " << a << " by 1 is: " << leftShiftResult << endl;

    // Right Shift
    int rightShiftResult = a >> 1; // 0101 >> 1 = 0010
    cout << "Right shift " << a << " by 1 is: " << rightShiftResult << endl;

    return 0;

}
