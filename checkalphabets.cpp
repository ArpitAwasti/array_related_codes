#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s, A, Z, a, z;
    cin >> s;
    if (s >= 'A' && s <= 'Z')
    {
        cout << 1;
    }
    else if (s >= 'a' && s <= 'z')
    {
        cout << 0;
    }
    else
    {
        cout << -1;
    }
}
