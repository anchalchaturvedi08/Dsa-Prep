#include <iostream>
using namespace std;

// int main()
// {
// 1. product of num
// int a, b;
// cout<<"Enter first number: ";
// cin>>a;
// cout<<"Enter second number: ";
// cin>>b;
// cout<<"The product of two number is: "<<a*b;

// 2. sub of two num
// int a, b;
// cout<<"Enter first number: ";
// cin>>a;
// cout<<"Enter second number: ";
// cin>>b;
// cout<<"Subtraction of two number is: "<<a-b;

// 3. print 6*3 in o/p
// cout<<"6*3"<<endl;
// return 0;

// 4. two numbers are given,print the bigger number, it is given that both numbers can't be the same.
// int num1, num2;
// cout<<"Enter the first number: ";
// cin>>num1;
// cout<<"Enter the second number: ";
// cin>>num2;
// if(num1>num2){
//     cout<<"The bigger number is: "<<num1<<endl;
// }
// else{
//     cout<<"The bigger number is: "<<num2<<endl;
// }
// return 0;

// 5.age of a person is given,print adult if his/her age is greater than 18,otherwise print teenager.
// int age;
// cout<<"Enter the Age: ";
// cin>>age;
// if(age>18){
//     cout<<"Adult"<<endl;
// }
// else{
//     cout<<"Teenager"<<endl;
// }
// return 0;

// 6.take a number in input (ex: n) and print the corresponding month to it.
// int n;
// cout<<"Enter a number between 1 and 12: ";
// cin>>n;
// if(n==1){
//     cout<<"January"<<endl;
// }
// else if(n==2){
//     cout<<"February"<<endl;
// }
// else if(n==3){
//     cout<<"March"<<endl;
// }
// else if(n==4){
//     cout<<"April"<<endl;
// }
// else if(n==5){
//     cout<<"May"<<endl;
// }
// else if(n==6){
//     cout<<"June"<<endl;
// }
// else if(n==7){
//     cout<<"July"<<endl;
// }
// else if(n==8){
//     cout<<"Agust"<<endl;
// }
// else if(n==9){
//     cout<<"September"<<endl;
// }
// else if(n==10){
//     cout<<"October"<<endl;
// }
// else if(n==11){
//     cout<<"November"<<endl;
// }
// else if(n==12){
//     cout<<"December"<<endl;
// }
// else{
//     cout<<"Invalid!"<<endl;
// }
// return 0;

// 7. Ticket price Calci
// int age;
// cout<<"Enter Your age: ";
// cin>>age;

// if(age<12){
//     cout<<"Yes"<<endl;
// }
// else if(age>65){
//     cout<<"Yes"<<endl;
// }
// else{
//     cout<<"No"<<endl;
// }
// return 0;

// 8. print "India will win the World Cup 2023", 20 times
// for(int i=1; i<=20; i=i+1){
//     cout<<"India will win the World Cup 2023"<<endl;
// }

// 9. print all the odd no from 1 t0 n
// int n;
// cout<<"Enter the number: ";
// cin>>n;
// // odd no
// cout<<"Odd numbers from 1 to "<<n<<" are:"<<endl;
// for(int i=1; i<=n; i=i+1){
//     if(i%2 != 0){
//         cout<<i<<" ";
//     }
// }
// cout<<endl;

// 10. print all the numbers from 1 to n, which is divisible by 4
// int n;
// cout<<"Enter the number: ";
// cin>>n;

// cout<<"Numbers from 1 to "<<n<<" that are divisible by 4 are:"<<endl;
// for(int i=1; i<=n; i=i+1){
//     if(i%4 == 0){
//         cout<<i<<" ";
//     }
// }
// cout<<endl;

// 11.print char from 'A' to 'Z'
// char name;
// for(name='A'; name<='Z'; name=name+1){
//     cout<<name<<" ";
// }

// 12.print char from 'Z' to 'A'
// for(char ch='Z'; ch>='A'; ch=ch-1){
//     cout<<ch<<" ";
// }

// 13.there is an arithmetic progression, first number is 220 and common difference is 7. so print all the numbers from 220 to 730 which follow the ap.
// int first_term = 220;
// int common_difference = 7;
// int current_term = first_term;

// cout<<"The numbers in the AP from "<< first_term <<" to 730 are:"<<endl;
// while(current_term<=730){
//     cout<<current_term<<" ";
//     current_term += common_difference;
// }
// cout<<endl;

// 14. print sum of square of first n natural number
// int n, sum=0;
// cout<<"Enter a positive integer: ";
// cin>>n;
// for(int i=1; i<=n; i=i+1){
//     sum += i*i;
// }
// cout<<"The sum of the squares of the first "<<n<<" natural numbers is: "<<sum<<endl;

// 15. Print Sum of cube of first n natural number
// int n, sum=0;
// cout<<"Enter the number: ";
// cin>>n;
// for(int i=1; i<=n; i=i+1){
//     sum += i*i*i;
// }
// cout<<"The sum of cube of the first "<<n<<" natural numbers is: "<<sum<<endl;
// }

// 16. Print n’th Fibonacci number
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 0) return -1; // Invalid input
    if (n == 1) return 0;
    if (n == 2) return 1;

    int a = 0, b = 1, c;
    for (int i = 3; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cout << "Enter the position of the Fibonacci number you want: ";
    cin >> n;

    int result = fibonacci(n);
    if (result == -1) {
        cout << "Input should be a positive integer greater than 0." << endl;
    } else {
        cout << "The " << n << "th Fibonacci number is: " << result << endl;
    }

    return 0;
}
