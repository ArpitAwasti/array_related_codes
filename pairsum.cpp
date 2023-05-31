#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, j, k;
    cin >> n;
    int A[n];
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (A[j] < A[i])
    //         {
    //             temp = A[i];
    //             A[i] = A[j];
    //             A[j] = temp;
    //         }
    //     }
    // }
    sort(A, A+n);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    int x;
    cin >> x;
    int sum1 = 0;
    for (int j = 0; j < n; j++)
    {
        for (int k = j + 1; k < n; k++)
        {
            sum1 = A[j] + A[k];
            if (sum1 == x)
            {
                cout << A[j] << " " << A[k] << endl;
            }
        }
    }

    return 0;
}
