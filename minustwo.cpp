#include <iostream>
using namespace std;

int main()
{
    int T; cin >> T;
    int n;

    for (int i = 0; i < T; i++)
    {
        int odd = 0; int even = 0;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int j = 0; j < n; j++)
        {
            if (a[j] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (odd >= even)
        {
            cout << odd << '\n';
            continue;
        }
        int zerom4 = 0; int twom4 = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] % 4 == 0)
            {
                zerom4++;
            }
            else if (a[j] % 4 == 2)
            {
                twom4++;
            }
        }
        int largest = odd;
        if (zerom4 > largest)
        {
            largest = zerom4;
        } 

        if (twom4 > largest)
        {
            largest = twom4;
        }
        cout << largest << '\n';
    }
}
