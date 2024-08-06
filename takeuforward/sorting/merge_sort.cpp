#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    vector<int> temp;
    int left = low, right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
            temp.push_back(arr[left++]);
        else
            temp.push_back(arr[right++]);
    }
    while (left <= mid)
    {
        temp.push_back(arr[left++]);
    }
    while (right <= high)
    {
        temp.push_back(arr[right++]);
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void merge_sort_recursive(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    // first half
    merge_sort_recursive(arr, low, mid);
    // second half
    merge_sort_recursive(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

void merge_sort_iterative(int arr[], int n)
{
    for (int curr_size = 1; curr_size <= n - 1; curr_size *= 2)
    {
        for (int low = 0; low < n - 1; low += 2 * curr_size)
        {
            int mid = min(low + curr_size - 1, n - 1);
            int high = min(low + 2 * curr_size - 1, n - 1);
            merge(arr, low, mid, high);
        }
    }
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << "Before merge sort recursive: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    merge_sort_recursive(arr, 0, n - 1);
    cout << "After merge sort recursive: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    int arr2[] = {13, 46, 24, 52, 20, 9};
    n = sizeof(arr2) / sizeof(arr2[0]);
    merge_sort_iterative(arr2, n);
    cout << "After merge sort iterative: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << "\n";
    return 0;
}