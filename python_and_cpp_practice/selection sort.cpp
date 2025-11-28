#include<iostream>
using namespace std;
int main(){
    // int n = 5;
    // int arr[5] = {7, 4, 6, 9, 5};
    int n ;
    cout<<"enter the size of  numbers ";

    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter "<<1+i;
        cin>>arr[i];
    }
    cout << "Before sorting: ";
    for (int i:arr){
        cout<<i<<" ";
    }
    for(int i=0;i<n;i++){
        int min=i;
        for (int j=i+1;j<n-1;j++){
            if(arr[min]>arr[j]){
                 swap(arr[j],min);
            }
        }
    }
    cout << "\nAfter sorting: ";
    for (int i:arr){
        cout<<i<<" ";
    }
}
