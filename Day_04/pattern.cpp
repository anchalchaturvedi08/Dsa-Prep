#include<iostream>
using namespace std;

int main() {
    // 1. Print stars
    // int row, col;
    // for(row=1; row<=5; row=row+1){
    //     for(col=1; col<=5; col=col+1){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    // 2. Print Number 10 pattern
    // int row, col;
    // for(row=1; row<=5; row=row+1){
    //     for(col=1; col<=5; col=col+1){
    //         cout<<"10"<<" ";
    //     }
    //     cout<<endl;
    // }

    // 3. Pattern Number Pattern- 1
    // int row, col;
    // for(row=1; row<=5; row=row+1){
    //     for(col=1; col<=5; col=col+1){
    //         cout<<row<<" ";
    //     }
    //     cout<<endl;
    // }

    // 4. Number Pattern-2 
    // int row, col;
    // for(row=1; row<=5; row=row+1){
    //     for(col=1; col<=5; col=col+1){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    // 5. Descending Number pattern 
    // int row, col;
    // for(row=1; row<=5; row=row+1){
    //     for(col=5; col>=1; col=col-1){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    // 6.  Ascending Square Pattern 
    // int row, col;
    // for(row=1; row<=5; row=row+1){
    //     for(col=1; col<=5; col=col+1){
    //         cout<<col*col<<" ";
    //     }
    //     cout<<endl;
    // }

    // 7. Pattern of Alphabets 
    // int row, col;
    // for(row=1; row<=5; row=row+1){
        // char name = 'a'+row-1;  // ASCII value addition
    //     for(col=1; col<=5; col=col+1){
    //         cout<<name<<" ";
    //     }
    //     cout<<endl;
    // }

    // 8. Ascending alphabet pattern
    // int row;
    // char col;
    // for (row = 1; row <= 5; row = row + 1) {
    //     for (col = 'a'; col <= 'e'; col = col + 1) {
    //         cout<<col<<" ";
    //     cout<<endl;
    // }

    // 9. Number Pattern
     int row, col;
     int count = 1;
     for(row=1; row<=5; row=row+1){
        for(col=1; col<=5; col=col+1){
            cout<<count<<" ";
            count = count + 1;
        }
        cout<<endl;
     }

}