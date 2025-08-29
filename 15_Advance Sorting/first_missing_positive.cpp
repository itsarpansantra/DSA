
#include <iostream>
#include <vector>
using namespace std;

int smallestPositive(int arr[], int n) {
    int i = 0;
    while (i < n) {
        int correctIdx = arr[i] - 1;
        if (arr[i] > 0 && arr[i] <= n && arr[i] != arr[correctIdx]) 
            swap(arr[i], arr[correctIdx]);
        else 
            i++;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) 
            return i + 1;
    }
    return n + 1;
}

int main() {
    int arr[] = {3, 4, -1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Smallest missing positive integer: " << smallestPositive(arr, n);
    return 0;
}

