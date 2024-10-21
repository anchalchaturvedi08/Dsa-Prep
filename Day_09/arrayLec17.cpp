#include<iostream>
using namespace std;
// 1. Reverse array
// int main() {
//     int arr[6] = {1,2,3,4,5};
//     int start=0, end=4;

//     while(start<end)
//     {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     };

//     for(int i=0; i<5; i++)
//     cout<<arr[i]<<" ";

// }

// 2. fibonacci series
// int main() {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int arr[1000];

//     arr[0]=0;
//     arr[1]=1;

//     for(int i=2; i<=n; i++)
//     arr[i] = arr[i-1]+arr[i-2];

//     cout<<arr[n-1]<<" ";
// }

// passing array to functioin
 void fun(int a[], int n){
        cout<<sizeof(a)<<endl;
        for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}

int main() {
    int arr[5] = {1,2,3,4,5};
    cout<<sizeof(arr)<<endl;
    fun(arr,5);
}