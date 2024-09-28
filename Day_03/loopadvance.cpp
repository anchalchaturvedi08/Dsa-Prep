#include<iostream>
using namespace std;

int main() {
    // 1. Print number from 101 to 200  
    // for(int i=101; i<200; i=i+1) {
    //     cout<<i<<endl;
    // }

    // 2. Print Alphabets 'a' to 'z'  
    // char name;
    // for(name='a'; name<='z'; name=name+1){
    //     cout<<name<<endl;
    // }

    // 3. Print numbers in Reverse order
    // int num;
    // for(num=10; num>=1; num=num-1){
    //     cout<<num<<endl;
    // }

    // 4. Print numbers from 1 to 100 but  difference is 3
    // int num;
    // for(num=1; num<=100; num=num+3){
    //     cout<<num<<endl;
    // }

    // 5. Multiplication table making
    // int n;
    // for(n=1; n<=10; n=n+1){
    //     cout<<2<<"*"<<n<<"="<<2*n<<endl;
    // }

    // 6.Calculate power of a number - 1st Approach 
    // int n, pow, i, num;
    // cout<<"enter the number: ";

    // cin>>n;
    // cout<<"enter the pow: ";

    // num = n;
    // for(int i=1; i<pow; i=i+1) {
    //     num=num*n;
    // }
    // cout<<num;

    //  7.  Sum of 'n' natural numbers
    // int n, sum = 0;
    // cout << "Enter a positive integer: ";
    // cin >> n;
    // for(int i=1; i<=n; i=i+1) {
    //     sum = sum+i;
    // }
    // cout << "Sum of the first " << n << " natural numbers is: " << sum << endl;

    // 8. sum of square of 'n' natural numbers 
    // int n;
    // long long sum = 0;
    // cout << "Enter a positive integer: ";
    // cin >> n;
    // for(int i=1; i<=n; i=i+1) {
    //     sum = sum+i*i;
    // }
    // cout << "Sum of the squares of the first " << n << " natural numbers is: " << sum << endl;

    // 9. Factorial of a Number 
    // int n,fact=1;
    // cout<<"Enter the number: ";
    // cin>>n;
    // for(int i=1; i<=n; i=i+1){
    //     fact = fact*i;
    // }
    // cout<<"The Factorial number is: "<<fact;

    // 10. check a number is Prime Number  or not 
    // int n, i;
    // cout<<"Enter the number: ";
    // cin>>n;
    // if(n<2){
    //     cout<<"Not a prime number";
    //     return 0;
    // }
    // else{
    //     for(i=2;i<n;i=i+1){
    //         if(n%2==0){
    //             cout<<"Not a Prime Number";
    //             return 0;
    //         }
    //     }
    //     cout<<"Prime number";
    // }

    // 11. Fibonacci Series of a Number 
    // fibonacci series [0,1,1,2,3,5,8,13,21...]
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    // Variables to store the first two terms of the Fibonacci series
    int t1 = 0, t2 = 1;
    int nextTerm;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        cout << t1 << " ";  // Print the current term
        nextTerm = t1 + t2; // Calculate the next term
        t1 = t2;            // Update t1 to the next term
        t2 = nextTerm;      // Update t2 to the next term
    }

    cout << endl;
    return 0;
}