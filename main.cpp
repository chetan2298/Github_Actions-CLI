#include <bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x)
{
    // you code goes here
    int i = 0;
    int diff = INT_MAX;
    int j = arr.size() - 1;
    pair<int, int> z while (i < j)
    {
        if (abs(arr[i] + arr[j] - x) < diff)
        {
            diff = abs(arr[i] + arr[j] - x);
            z = make_pair(arr[i], arr[j]);
        }
        if ((arr[i] + arr[j]) < x)
        {
            i++;
        }
        else
            j--;
    }
    return z;
}

vector<int> kRotate(vector<int> a, int k)
{
    // your code  goes here
    vector<int> b;
    int n = a.size();
    k = k % n;
    for (int i = n - k; i < n; i++)
        b.push_back(a[i]);
    for (int i = 0; i < n - k; i++)
        b.push_back(a[i]);

    return b;
}

int main()
{
    vector<int> ar1 = {10, 22, 28, 29, 30, 40};
    // //vector<int> ar2 = {10, 20, 30, 40};
    // int m = sizeof(ar1)/sizeof(ar1[0]);
    // int n = sizeof(ar2)/sizeof(ar2[0]);
    // int x = 54;
    int p = 8;
    vector<int> j = kRotate(ar1, p);
    for (auto i : j)
        cout << " " << i << " ";
    //  C++ program to rotate right an array by K times

    // int arr[] = {1, 3, 5, 7, 9, 11};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int k = 3; // No. of rotations
    // k = k % n;
    // int i, j;
    // // Reverse last k numbers
    // for (i = n - k, j = n - 1; i < j; i++, j--)
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    // }
    // // Reverse the first n-k terms
    // for (i = 0, j = n - k - 1; i < j; i++, j--)
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    // }
    // // Reverse the entire array
    // for (i = 0, j = n - 1; i < j; i++, j--)
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    // }

    // // Print the rotated array
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // closestSum(ar1, x);
    return 0;
}
