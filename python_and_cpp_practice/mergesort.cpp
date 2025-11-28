/*
#include <iostream>
#include <vector>
using namespace std;

int mergesort(vector<int> arr)
{
    if (arr.size() <= 1)
        return arr;
    int mid = arr.size() / 2;
    int left = [:mid];
    int right = [mid:];
    mergesort(left);
    mergesort(right);
    return merge(left, right);
}

int merge(vector<int> left, vector<int> right)
{
    vector<int> result = vector<int>();
    int i = 0, j = 0;
    while (i < left.size() && j < right.size())
    {
        if (left[i] < right[j])
        {
            result.pushback(left[i]);
            i++;
        }
        else
        {
            result.pushback(right[j]);
            j++;
        }
    }
    while (i < left.size())
    {
        result += left[i];
        i++;
    }
    while (j < right.size())
    {
        result += right[j];
        j++;
    }
    return result;
}
int main()
{
    // int n[],m[];
    vector<int> n, m;
    n.push_back(3, 5, 7, 4, 2, 4, 6, 8, 9, 1);
    int m = mergesort(n);
    cout << "Sorted array: ";
    for (int i = 0; i < m.size(); i++)
    {
        cout << m[i] << " ";
    }
}*/

// #include <iostream>
// #include <vector>
// using namespace std;

// void merge(int arr[] , int left,int mid, int right){
//     int s1=mid-left;
//     int s2=right -mid+1;
// int larr[s1];
// int rarr[s2];
// for(int i=0;i<s1;i++)
// larr[i]=arr[left+i];
// for(int j=0;j<s2;j++)
//     rarr[j]=arr[mid+j];
// int k=0, i=0, j=0;
// while(i<s1&& j<s2){
//     if(larr[i]<rarr[j]){
//         arr[k]=larr[i];
//         i++;

//     } else {
//         arr[k++]=rarr[j++];
//         j++;
//     }k++;
// }
// while(i<s1){
//     arr[k]=larr[i];
//     i++;
//     k++;
// }

// while(j<s2){
//     arr[k]=rarr[j];
//     j++;
//     k++;
// }
// }

// void printarr(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void mergesort(int arr[], int left, int right)
// {
//     if(left<right){
//         int mid=left+(right-left)/2;
//         mergesort(arr, left, mid);
//         mergesort(arr,mid+1,right);
//         merge(arr, left, mid, right);
//     }
// }
// int main()
// {
//     int n[]={3, 5, 7, 4, 2, 4, 6, 8, 9, 1};
//     int size=sizeof(n)/sizeof(n[0]);
//     cout << "Before sorting: ";
//     printarr(n, size);
//     mergesort(n, 0, size - 1);
//     printarr(n, size);

// }

#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    int s1 = mid - left + 1;
    int s2 = right - mid;
    int larr[s1], rarr[s2];
    for (int i = 0; i < s1; i++)
        larr[i] = arr[left + i];
    for (int j = 0; j < s2; j++)
        rarr[j] = arr[mid + 1 + j];
    int i = 0, j = 0, k = left;
    while (i < s1 && j < s2)
    {
        if (larr[i] <= rarr[j])
        {
            arr[k] = larr[i];
            i++;
        }
        else
        {
            arr[k] = rarr[j];
            j++;
        }
        k++;
    }
    while (i < s1)
    {
        arr[k] = larr[i];
        i++;
        k++;
    }
    while (j < s2)
    {
        arr[k] = rarr[j];
        j++;
        k++;
    }
}
void merge_sort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);   
    }
}
void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    cout << "Enter size of array: ";
    int size;
    cin >> size;
    if (size <= 0)
    {
        cout << "Invalid array size. Exiting." << endl;
        return 1;
    }
    int array[size];
    for (int ind = 0; ind < size; ind++)
    {
        cout << "Enter array element at index " << ind << ": ";
        cin >> array[ind];
    }
    cout << "Before sorting: ";
    printArray(array, size);
    merge_sort(array, 0, size - 1);
    cout << "After sorting: ";
    printArray(array, size);
    return 0;
}