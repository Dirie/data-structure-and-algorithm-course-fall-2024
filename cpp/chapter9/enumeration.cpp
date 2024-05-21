#include <iostream>
#include <vector>

using namespace std;

vector<int> enumerationSort(const vector<int>& arr) {
    int n = arr.size();
    vector<int> sorted_arr(n);

    // For each element in the array, count how many elements are less than it
    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if (arr[j] < arr[i] || (arr[j] == arr[i] && j < i)) {
                count++;
            }
        }
        sorted_arr[count] = arr[i];
    }

    return sorted_arr;
}

int main() {
    vector<int> arr = {4, 2, 5, 1, 3};
    vector<int> sorted_arr = enumerationSort(arr);

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Sorted array: ";
    for (int num : sorted_arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
