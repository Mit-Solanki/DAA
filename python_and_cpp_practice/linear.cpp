// #include <iostream>
// using namespace std;

// int linear(int arr[],int c, int size){
//     int i=0;
//     for ( i=0;i<size;i++){
//         if(c==arr[i])
//         {break;}
//     }
// return (i==size) ? -1 : i; // If i equals size, element not found, return -1
// };

// int main()
// {
//     // int arr[] = {8, 7, 5, 4, 3, 2, 9};
//     // int n = 3;
//     // int size = sizeof(arr) / sizeof(arr[0]);
//     int a,b,c;
//     cout<<"enter array size";
//     cin>>b;
//     int arr[b];
//     for (int  i = 0; i<b;i++)
//     {cout<<"enter element"<<i+1;
//         cin>>arr[i];
//     }
//     cout<<"enter element to search";
//     cin>>c;
//     int size=sizeof(arr)/sizeof(arr[0]);

//     if(linear(arr, c, size) != -1) {
//         cout << "Element found at index: "<< endl;
//     } else {
//         cout << "Element not found" << endl;
//     }
//     // for (int i = 0; i < 7; i++)
//     // {
//     //     arr[i] == n ? cout << "ele found" : cout << "not found";
//     //     cout << endl;
//     // }

//     // for (int i : arr)
//     // {
//     //     if (i == n)
//     //     {

//     //         cout << "Element found: " << i;
//     //         break;
//     //     }
//     // }

//     // if(linear(arr, n, size) != -1) {
//     //     cout << "Element found at index: " << linear(arr, n, size) << endl;
//     // } else {
//     //     cout << "Element not found" << endl;
//     // }
// }

#include <iostream>
using namespace std;

int linear(int arr[], int c, int size)
{
    int i = 0, b = 0;
    for (i = 0; i < size; i++)
    {
        if (c == arr[i])
        {
            b += 1;
        }
    }

    cout << "no of same elemnt" << b << endl;
    return b;
    // If i equals size, element not found, return -1
};

int main()
{

    int a, b, c;
    cout << "enter array size";
    cin >> b;
    int arr[b];
    for (int i = 0; i < b; i++)
    {
        cout << "enter element" << i + 1;
        cin >> arr[i];
    }
    cout << "enter element to search";
    cin >> c;
    int size = sizeof(arr) / sizeof(arr[0]);
    // linear(arr, c, size);
    cout <<endl<< "no of same elemnt" << linear(arr, c, size) << endl;
    // if(linear(arr, c, size) != -1) {
    //     cout << "Element found at index: "<< endl;
    // } else {
    //     cout << "Element not found" << endl;
    // }
}

// sorting ,index ,bubble ,selection