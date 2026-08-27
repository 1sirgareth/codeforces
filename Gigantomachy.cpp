#include <iostream>
using namespace std;

int resistance(int a[], int n);

int main() 
{
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b[m];
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        int resistancea, resistanceb; // no. of boulders a and b can take each.
        resistancea = resistance(a, n);
        resistanceb = resistance(b, m);

        if (resistancea >= resistanceb)
        {
            cout << 1 << '\n'; 
        }
        else 
        {
            cout << 2 << '\n';
        }
    }




    return 0;
}

int resistance(int a[], int n)
{
    int sum = 0;

    if (a[n - 1] != 1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if ( n == 1)
            {
                return a[0];
            }
            sum = sum + a[i] - a[i+1] + 1;
        }
        sum = sum + a[n-1];
        return sum;
    }

    for (int i = 0; i < n - 1; i++)
    {
        sum = sum + a[i] - a[i+1] + 1;   
    }
    sum = sum + 1;
    return sum;




}
