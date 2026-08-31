#include <iostream>
using namespace std;

int main()
{
    int T; cin >> T;

    for (int i = 0; i < T; i++)
    {
        int n; cin >> n;
        int k; cin >> k;
        if (k >= n - 1)
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << n << '\n';
        }
    }
}
