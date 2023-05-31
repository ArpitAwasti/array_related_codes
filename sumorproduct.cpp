#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, Q, sum = 0, product = 1;
    cout << "enter N: ";
    cin >> N;
    cout << "enter Q: ";
    cin >> Q;
    if (Q == 1)
    {
        for (int i = 1; i <= N; i++)
        {
            sum = sum + i;
        }
        cout << sum;
    }
    if (Q == 2)
    {
        for (int i = 1; i <= N; i++)
        {
            product = product * i;
        }
        cout << product;
    }
}
