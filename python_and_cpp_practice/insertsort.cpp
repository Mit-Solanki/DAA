// 2nd interation.cpp
#include <iostream>
using namespace std;
int main(){
    int n=5;//size of arr
    int arr[5]={1,4,6,9,5};
    for(int j = 1 ;j<n;j++){
        int key = arr[j];
        int i = j-1;

        while(i >-1 && arr[i]>key){
            arr[i+1]= arr[i];
            i--;
        }
        arr[i+1]= key;
    }
    for( int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
}

/*#include<iostream>
using namespace std;

int main(){
    cout<<"Enter size of arr";
    int size;
    cin>>size;

    int arr [size];
    for(int ind=0;ind<size;ind++)
    {
        cout<<"Enter arr element at index "<<ind;
        cin>>arr[ind];
    }

    for(int j = 1 ;j<size;j++){
        int key = arr[j];
        int i = j-1;

        while(i >-1 && arr[i]>key){
            arr[i+1]= arr[i];
            i--;
        }
        arr[i+1]= key;
    }


    return 0;
}*/