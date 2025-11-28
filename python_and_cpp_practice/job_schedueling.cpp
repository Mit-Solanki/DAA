#include <iostream>
#include <algorithm>
#include<ranges>
using namespace std;
#include <cmath>

int job(int size, int deadline[],int profit[]){
    // int maxdeadline=max_(deadline, deadline + size);
    int maxdeadline = *max_element(deadline, deadline + size);
    int arr[size];
    zip(deadline,profit);
    sort(deadline, deadline+size);
    // for(int i=0;i<size;i++){
    //     cout<<deadline[i]<<" ";
    // }
    sort(profit, profit + size);


}

int main()
{
    int size=6;
    int deadline[size] = {2,3,1,1,2,1};
    int profit[size]={100,20,35,27,30,28};
    job(size, deadline, profit);
}