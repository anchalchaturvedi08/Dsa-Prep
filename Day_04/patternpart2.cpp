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
    // int row, col;
    // for(row=1; row<=5; row=row+1){
    //     for(col=1; col<=row; col=col+1){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    // 3. Number pattern-02
    // int row, col;
    // for(row=1; row<=5; row=row+1){
    //     for(col=1; col<=row; col=col+1){
    //         cout<<row<<" ";
    //     }
    //     cout<<endl;
    // }

    // 4. Reverse Number  pattern 
    // int row, col;
    // for(row=1; row<=5; row=row+1){
    //     for(col=row; col>=1; col=col-1){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    // 5. Alphabet pattern
    // int row, col;
    // for(row=1; row<=5; row=row+1){
    //     char name = 'a' + row-1; // char name 
    //     for(col=1; col<=row; col=col+1){
    //         cout<<name<<" ";
    //     }
    //     cout<<endl;
    // }

    // 6. Star Pattern 
    // int row, col;
    // for(row=1; row<=5; row=row+1){
    //     for(col=1; col<=5-(row-1); col=col+1){
    //         cout<<"*"<<" ";
    //     }
    //     // 2nd logic -->
    //     // for(row=5; row>=1; row=row-1){
    //     // for(col=1; col<=row; col=col+1){
    //     //     cout<<"*"<<" ";
    //     // }
    //     cout<<endl;
    // }

    // 7. Number pattern
    // int row, col;
    // for(row=1; row<=5; row=row+1){
    //     for(col=1; col<=5-(row-1); col=col+1){
    //         cout<<col<<" ";
    //     }
    //     // 2nd logic -->
    //     // for(row=5; row>=1; row=row-1){
    //     // for(col=1; col<=row; col=col+1){
    //     //     cout<<col<<" ";
    //     // }
    //     cout<<endl;
    // }

    // 8. number pattern
    int row, col;
    for(row=1; row<=5; row=row+1){
        for(col=5; col>=5-(row-1); col=col-1){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}