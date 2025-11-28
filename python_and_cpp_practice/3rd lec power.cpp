// write program to find out x^n

#include <iostream>
using namespace std;

float power(float x, float n)
{
    // int result = 1;
    // if(n==0)
    //     return 1;
    // for (int i=1;i<=n;i++){
    //     result*= x;
    // }
    
    // return result;

    if(n == 0)
        return 1;
    if(n > 0)
        return x* power(x,n-1);
    if(n<0){
        return 1/power(x, -n);
    }

}
int main()
{
    int x=2, n=-3;
    // cout << "Enter the base (x): ";
    // cin >> x;
    // cout << "Enter the exponent (n): ";
    // cin >> n;
    float sol=power(x, n);
    cout<<sol;
}