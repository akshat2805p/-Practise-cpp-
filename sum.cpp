#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    long long sum = 0;
    long long product = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        product *= arr[i];
    }

    cout << "sum = " << sum << endl;
    cout << "product = " << product << endl;

    return 0;
}