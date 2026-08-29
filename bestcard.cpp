#include <iostream>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int possible = 1; // 1 implies n+1 is coprime to all [2,n]
        int n;
        cin >> n;
        for (int j = 2; j < n + 1; j++)
        {
            if ( (n + 1) % j == 0)
            {
                cout << "NO\n";
                possible = 0;
                break;
            }
        }
        if (possible == 1)
        {
            cout << "YES\n";
        }
    }
}
