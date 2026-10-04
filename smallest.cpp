#include <iostream>
#include <climits>    // Required for INT_MAX and INT_MIN
#include <algorithm>  // Required for std::min and std::max

using namespace std;

int main()
{
    int nums[] = {5, 3, 9, 2, 7};
    int size = 5;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }

    cout << "smallest = " << smallest << endl;
    cout << "largest = " << largest << endl;
    return 0;
}

