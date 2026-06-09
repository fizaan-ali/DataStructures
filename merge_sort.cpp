#include <iostream>
#include <vector>

using namespace std;

// Function to merge two sorted halves into a single sorted section
void merge(vector<int> &arr, int start, int mid, int end) {
    vector<int> temporary;
    int i = start;      // Iterator for the left half
    int j = mid + 1;    // Iterator for the right half

    // Compare elements from both halves and push the smaller one into the temporary vector
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) { // Change to '>' for sorting in descending order
            temporary.push_back(arr[i]);
            i++;
        } else {
            temporary.push_back(arr[j]);
            j++;
        }
    }

    // Copy any remaining elements from the left half
    while (i <= mid) {
        temporary.push_back(arr[i]);
        i++;
    }

    // Copy any remaining elements from the right half
    while (j <= end) {
        temporary.push_back(arr[j]);
        j++;
    }

    // Copy the sorted elements back into the original array
    for (int index = 0; index < temporary.size(); index++) {
        arr[index + start] = temporary[index];
    }
}

// Recursive function to repeatedly divide the array and sort it
void mergeSort(vector<int> &arr, int start, int end) {
    if (start < end) {
        // Calculate mid using this formula to prevent integer overflow
        int mid = start + (end - start) / 2;

        // Recursive call for the left half
        mergeSort(arr, start, mid);

        // Recursive call for the right half
        mergeSort(arr, mid + 1, end);

        // Merge the sorted halves
        merge(arr, start, mid, end);
    }
}

int main() {
    vector<int> arr = {12, 31, 35, 8, 32, 17};

    // Call mergeSort with 0 as the starting index and size-1 as the ending index
    mergeSort(arr, 0, arr.size() - 1);

    // Print the sorted array
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}