#include<iostream>
using namespace std;

int main(){
    // While loop
    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;
    // int i=1; //initialize

    // while(i<=10){ //break
    //     cout<<i*n<<endl;
    //     i++; //update
    // }

    // Do while loop
    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;

    // int i=1; // initialize

    // do{
    //     cout<<i<<endl;
    //     i++; // update
    // }while(i<=n); // break

    //Break condition
    // for(int i=1; i<=10; i++){
    //     if(i==4)
    //     break;
    //     cout<<i<<" ";
    // }

    // Continue condition
    // for(int i=1; i<=10; i++){
    //     if(i%4==0)
    //     continue;
    //     cout<<i<<" ";
    // }

    // Switch Condition
    // int i;
    // cout<<"Enter the number: ";
    // cin>>i;

    // switch(i){
    //     case 1:
    //     cout<<"Mon";
    //     break;

    //     case 2:
    //     cout<<"Tue";
    //     break;

    //     case 3:
    //     cout<<"Wed";
    //     break;

    //     case 4:
    //     cout<<"Thu";
    //     break;

    //     case 5:
    //     cout<<"Fri";
    //     break;

    //     case 6:
    //     cout<<"Sat";
    //     break;

    //     case 7:
    //     cout<<"Sun";
    //     break;

    //     default:
    //     cout<<"Invalid!";
    // }

    //  Scope of a Variable
    int localVar = 5;  // Yeh ek local variable hai jo main function ke andar declare kiya gaya hai

    cout << "Initial value of localVar: " << localVar << endl;

    // Loop variable ka scope loop ke andar hi hota hai
    for (int i = 1; i <= 5; i++) {
        int loopVar = i;  // Yeh loop variable hai jo sirf loop ke andar accessible hai
        cout << "Loop iteration " << i << ": loopVar = " << loopVar << endl;
    }

    // Loop ke bahar hum loopVar ko access nahi kar sakte
    // cout << "Outside loop: loopVar = " << loopVar << endl;  // Yeh line error degi agar uncomment ki

    cout << "Final value of localVar: " << localVar << endl;

    return 0;
}