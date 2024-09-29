#include <iostream>
using namespace std;

int main()
{   // 1. Print right handed Triangle 
    // int row, col;
    // for (row = 1; row <= 5; row = row + 1)
    // {
    //     for(col=1; col<=row; col=col+1){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    // 2. Ascending Number pattern
    int row, col;
    for(row=1; row<=5; row=row+1){
        for(col=1; col<=row; col=col+1){
            cout<<col<<" ";
        }
        cout<<endl;
    }

}