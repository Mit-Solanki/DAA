#include <iostream>
using namespace std;

// Function to perform selection sort

void select(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        if (minIndex != i)
        {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

// Function to print the array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Main function to test
int main()
{
    // int data[] = {64, 25, 12, 22, 11};
    // int size = sizeof(data) / sizeof(data[0]);
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int data[size];
    // cout << "Enter elements of array: ";
    for(int i = 0; i < size; i++) {
        cout<<"Enter element at index"<<i<<" ";
        cin >> data[i];
    }

    cout << "Original array: ";
    printArray(data, size);
    select(data, size);
    cout << "Sorted array: ";
    printArray(data, size);
    return 0;
}
