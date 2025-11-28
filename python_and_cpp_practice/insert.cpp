// #include <iostream>
// using namespace std;

// // Function to perform insertion sort

// void insertionSort(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }

// // Function to print the array
// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

// // Main function to test
// int main()
// {
//     int size;
//     cout << "Enter size of array: ";
//     cin >> size;
//     int data[size];
//     // cout << "Enter elements of array: ";
//     for(int i = 0; i < size; i++) {
//         cout<<"Enter element at index"<<i<<" ";
//         cin >> data[i];
//     }
//     cout << "Original array: ";
//     printArray(data, size);

//     insertionSort(data, size);

//     cout << "Sorted array: ";
//     printArray(data, size);

//     return 0;
// }

#include <iostream>
using namespace std;

int linear_search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++)
        if (arr[i] == target)
            return i;  
    return -1;          
}
#include <iostream>
#include <cmath>
int tryfunc() {
    int n; cin>>n;
    int ans=log10(n);
    cout<<ans<<endl;
    // return;
}
int main() {
    tryfunc();
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    // cout << "Enter elements of array: ";
    for(int i = 0; i < size; i++) {
        cout<<"Enter element at index"<<i<<" ";
        cin >> arr[i];
    }
    int target;
    cout<<"enter element to search";
    cin>>target;
    

    int result = linear_search(arr, size, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
