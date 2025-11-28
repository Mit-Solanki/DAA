#include<iostream>
using namespace std;

int knapsack(int size, int wt[],int profit[],int capacity) {
    int gain = 0;
    int ratio[size];
    for(int i=0;i<size;i++){
        ratio[i] = profit[i] / wt[i];
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(ratio[j] > ratio[i]){
                swap(ratio[i], ratio[j]);
                swap(wt[i], wt[j]);
                swap(profit[i], profit[j]);
            }
        }
    }
    for (int i=0;i<size;i++){
        if(wt[i]<=capacity){
            gain+=profit[i];
            capacity-=wt[i];
        }
        // for fractional knapsack
        else{
            float frac=capacity / wt[i];
            capacity=0;
            gain=profit[i]*frac+gain;

        } 
    }
    // cout<<"Maximum profit: " << gain << endl;
    return gain;
}

int main(){
    int size=7;
    int profit[size]={10,5,3,2,8,7,11};
    int wt[size]={2,3,1,4,3,2,7};
    int capacity=7;
    int result=knapsack(size,wt,profit,capacity);
    cout<<"Maximum profit: " << result << endl;
}