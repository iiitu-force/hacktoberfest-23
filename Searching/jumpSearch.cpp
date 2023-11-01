// C++ program to implement jump search
#include <bits/stdc++.h>
using namespace std;
 
int jumpSearch(int nums[], int item, int length)
{
    // Finding block size to be jumped
    int step = sqrt(length);
    
    int lowerBound = 0;

    // Jump search logic
    while (nums[min(step, length)-1] < item)
    {
        lowerBound = step;

        step += lowerBound;
        if (lowerBound >= length)
        {
            return -1;
        }
    }

    // Linear search logic
    while (nums[lowerBound] < item)
    {
        lowerBound++;

        // If pointer reaches next block or end of array, 
        // then the item is not present
        if (lowerBound == min(step, length))
        {
            return -1;
        }
    }

    // If element is found, then return the item
    if (nums[lowerBound] == item)
    {
        return lowerBound;
    }
    return -1;
}

// Example usage:
int main()
{
    int nums[] = {1, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int item = 10;
    
    int length = sizeof(nums) / sizeof(int);

    int position = jumpSearch(nums, item, length);

    if (position != -1)
    {
        cout << "\nNumber '" << item << "' is at index " << position;
    } else {
        cout << "\nNumber '" << item << "' is not in the provided array";
    }
    return 0;
}
