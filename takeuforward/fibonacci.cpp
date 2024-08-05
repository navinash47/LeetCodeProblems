#include <bits/stdc++.h>
using namespace std;
int fibonacci(int N)
{
    vector<int> fib_array;
    fib_array.push_back(0);
    fib_array.push_back(1);
    for (int i = 2; i <= N; i++)
    {
        fib_array.push_back(fib_array[i - 2] + fib_array[i - 1]);
    }
    cout << "FibArray is: ";
    for (int i = 0; i < fib_array.size(); i++)
        cout << fib_array[i] << " ";
    cout << endl;
    return fib_array[N];
}
int main()
{

    // Here, let’s take the value of N to be 4.
    int N = 10;
    int res = fibonacci(N);

    cout << "fibonacci(" << to_string(N) << ")= ";
    cout << res << endl;
    return 0;
}