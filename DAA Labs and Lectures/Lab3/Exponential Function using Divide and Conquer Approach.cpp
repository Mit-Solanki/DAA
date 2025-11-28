using namespace std;
#include <iostream>
int exponential(int x, int n){
    if(n == 0) return 1;
    if(n == 1) return x;

    int left = exponential(x, n / 2);
    int right = exponential(x, n - n / 2);
    return left * right;
}

int main(){
    int x, n;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the power value of n: ";
    cin >> n;

    int result = exponential(x, n);
    cout << result << endl;
    return 0;
}
