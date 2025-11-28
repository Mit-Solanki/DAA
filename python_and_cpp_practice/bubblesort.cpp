#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cout << "enter no of array size" << endl;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "enter element" << endl;
    //     cin >> arr[i];
    // }
    int arr[5]={1,2,8,4,5};
    int n=5;
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
                flag = false;
            }
        }
        cout<< "pass " << i + 1 << " : ";
        if(flag){
            cout<<"clean"; 
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}