#include <iostream>
using namespace std;

int main()
{
    int T; cin >> T;
    
    for (int i = 0; i < T; i++)
    {
        int n; cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int j = 0; j < n; j++)
        {
            if (a[j] == -1 || a[j] == 1)
            {
                a[j] = 1;
                break;
            }
        }
        for (int j = n - 1; j >= 0; j--)
        {
            if (a[j] == -1 || a[j] == 1)
            {
                a[j] = 1;
                break;
            }
        }
        int left = 0; // left most 1
        int right = n - 1; // right most 1
        for (int j = 0; j < n; j++)
        {
            if (a[j] == 1)
            {
                left = j;
                break;
            }
        }
        for (int j = n - 1; j >= 0; j--)
        {
            if (a[j] == 1)
            {
                right = j;
                break;
            }
        }
        if (left == 0 && right == n - 1 && (a[0] != 1 || a[n-1] != 1))
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (a[j] == -1 || a[j] == 1)
                {
                    a[j] = 1;
                    break;
                }
            }
            for (int j = n - 1; j >= 0; j--)
            {
                if (a[j] == -1 || a[j] == 1)
                {
                    a[j] = 1;
                    break;
                }
            }
            for (int j = 0; j < n; j++)
            {
                if (a[j] == -1)
                {
                    a[j] = 0;
                }
            }
            for (int j = 0; j < n - 1; j++)
            {
                cout << a[j] << ' ';
            }
            cout << a[n-1] << '\n';
            continue;
        }
        else if (left == right)
        {

            for (int j = 0; j < n-1; j++)
            {
                cout << a[j] << ' ';
            }
            cout << a[n-1] << '\n';
            continue;
        }
        int indexl = left + 1;
        int indexr = right - 1;
        while (left < right)
        {
            if (a[indexl] == -1)
            {
                a[indexl] = 0;
            }
            else if (a[indexl] == 1)
            {
                left = indexl;
            }
            indexl++;
            if (a[indexr] == -1)
            {
                a[indexr] = 0;
            }
            else if (a[indexr] == 1)
            {
                right = indexr;
            }
            indexr--;
        }
        for (int j = 0; j < n - 1; j++) 
        {
            cout << a[j] << ' ';
        }
        cout << a[n-1] << '\n';
    }
}
