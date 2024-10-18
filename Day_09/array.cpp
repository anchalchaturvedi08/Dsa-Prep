#include <iostream>
using namespace std;

int main()
{
    // 1.
    // int arr[5] = {1,2,3,4,5};
    // for (int i = 0; i < 6; i++)
    //     cout << arr[i] << " ";

    // 2.
    // int arr[] = {1,2,3,4,5,6};
    // for(int i=0; i<6; i++)
    // cout<<arr[i]<<" ";

    // 3.
    // int arr[6] = {1,2,3};
    // for(int i=0; i<6; i++)
    // cout<<arr[i]<<" ";

    // 4.
    // int arr[6] = {0};
    // for(int i=0; i<6; i++)
    // cout<<arr[i]<<" ";

    // 5. taking input from the user
    // int arr[6];
    // for(int i=0; i<6; i++)
    // cin>>arr[i];

    // for(int i=0; i<6;i++)
    // cout<<arr[i]<<" ";

    // 6.
    // int size;
    // cin >> size; // Taking input for the size of the array
    // // Declaring an array with the given size
    // // Note: Variable-Length Arrays (VLAs) are not part of the C++ standard.
    // // They are allowed in some compilers as an extension but can lead to portability issues.
    // int arr[size];
    // // Filling the array with input values
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i]; // Taking input for each element of the array
    // }
    // // Outputting each element of the array
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " "; // Outputting each element of the array
    // }

    // 7.
    // int size;
    // cin >> size;
    // int arr[1000]; // choti value ke liye to theek hai lekin badi value ke liye error dega
    // for (int i = 0; i < size; i++)
    //     cin >> arr[i];

    // for (int i = 0; i < size; i++)
    //     cout << arr[i] << " ";

    // 8. size of array
    // int arr[5] = {1, 2, 3, 4, 5};
    // // Print the size of the first element of the array in bytes
    // cout << sizeof(arr[0]) << " ";
    // // Print the total size of the array in bytes
    // cout << sizeof(arr) << " ";
    // // Print the number of elements in the array
    // cout << sizeof(arr) / sizeof(arr[0]) << " ";

    // 9.
    int arr[5] = {1,3,4,5,6};
    float a;
    cout<<sizeof(a)<<endl;

    return 0;
}