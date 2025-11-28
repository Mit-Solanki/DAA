#include <iostream>
using namespace std;

int exponential(int x, int n){
    int sum = 1;
    for(int i = 1; i <= n; i++){
        sum *= x;
    }
    cout << "The value of x raised to the power of n is: " << sum << endl;
    return sum;
}

int main(){
    int x, n;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of n: ";
    cin >> n;

    exponential(x, n);

    return 0;
}
