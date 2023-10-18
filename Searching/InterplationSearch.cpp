#include <stdio.h>  
  
int interpolationSearch(int arr[], int n, int target) {  
    int low = 0, high = n - 1;  
  
    while (low <= high && target >= arr[low] && target <= arr[high]) {  
        if (low == high) {  
            if (arr[low] == target)  
                return low;  
            return -1;  
        }  
  
        // Calculate the position using interpolation formula  
        int pos = low + (((double)(high - low) / (arr[high] - arr[low])) * (target - arr[low]));  
  
        if (arr[pos] == target)  
            return pos;  
  
        if (arr[pos] < target)  
            low = pos + 1;  
        else  
            high = pos - 1;  
    }  
      
    return -1; // Element not found  
}  
  
int main() {  
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    int target = 16;  
      
    int index = interpolationSearch(arr, n, target);  
      
    if (index != -1)  
        printf("Element %d found at index %d\n", target, index);  
    else  
        printf("Element %d not found in the array\n", target);  
      
    return 0;  
}  