#include<iostream>
using namespace std;

int main() {
    // int n, row, col;
    // cout<<"Enter the number: ";
    // cin>>n;
    // for(row=1; row<=n; row=row+1){
    //     // Space print
    //     for(col=1; col<=n-row; col=col+1){
    //         cout<<"  ";
    //     }
    //     // Star print
    //     for(col=1; col<=row; col=col+1){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // int n, row, col;
    // cout<<"Enter the number: ";
    // cin>>n;
    // for(row=1; row<=n; row=row+1){
    //     // space print
    //     for(col=1; col<=n-row; col=col+1){
    //         cout<<"  ";
    //     }
    //     // print number
    //     for(col=1; col<=row; col=col+1){
    //         cout<<row<<" ";
    //     }
    //     cout<<endl;
    // }

    // int n, row, col;
    // cout<<"Enter the number: ";
    // cin>>n;
    // //space print
    // for(row=1; row<=n; row=row+1){
    //     for(col=1; col<=n-row; col=col+1){
    //         cout<<"  ";
    //     }
    //     // print number
    //     for(col=1; col<=row; col=col+1){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    // int n, row, col;
    // cout<<"Enter the number: ";
    // cin>>n;
    // // space print
    // for(row=1; row<=n; row=row+1){
    //     for(col=1; col<=n-row; col=col+1){
    //         cout<<"  ";
    //     }
    //     // print character
    //     for(char c='A'; c<='A'+row-1; c=c+1){
    //         cout<<c<<" ";
    //     }
    //     // // 2nd logic
    //     // for(col=1; col<=row; col=col+1){
    //     //     char c = 'A'+col-1;
    //     //     cout<<c<<" ";
    //     // }
    //     cout<<endl;
    // }

    int n, row, col;
    cout<<"Enter the number: ";
    cin>>n;
    //space print
    for(row=1; row<=n; row=row+1){
        for(col=1; col<=n-row; col=col+1){
            cout<<"  ";
        }
        // print number
        for(col=row; col>=1; col=col-1){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}