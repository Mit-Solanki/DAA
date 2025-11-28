#include <iostream>
using namespace std;

int exponential(int x, int n)
{
    if (n == 0)
        return 1;

    int sum = exponential(x, n / 2);
    cout << "The value of x raised to the power of n is: ";

    if (n % 2 == 0)
    {
        cout << sum * sum << endl;
        return sum * sum;
    }
    else
    {
        cout << x * sum * sum << endl;
        return x * sum * sum;
    }
}

int main()
{
    int x, n;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the power value of n: ";
    cin >> n;

    int result = exponential(x, n);
    cout << result << endl;
    return 0;
}
