#include<iostream>

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {9, 12, 32, 54, 77, 435, 643};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 643;

    int result = binarySearch(arr, 0, n - 1, target);
    if (result != -1) {
        std::cout << "Element " << target << " found at index " << result << "\n";
    } else {
        std::cout << "Element " << target << " not found in array \n";
    }

    return 0;
}
