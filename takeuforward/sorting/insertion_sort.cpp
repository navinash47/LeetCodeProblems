#include <bits/stdc++.h>
using namespace std;

void inserion_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            if (arr[j] >= arr[j - 1])
                break;
            else
            {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before inserion sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    inserion_sort(arr, n);

    cout << "After inserion sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}