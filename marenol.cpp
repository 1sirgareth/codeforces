#include <iostream>
using namespace std;

int main()
{
    int T; cin >> T;

    for (int i = 0; i < T; i++)
    {
        string a, b;
        int n; cin >> n;
        cin >> a >> b;
        int asumodd = 0; int asumeven = 0;
        int bsumodd = 0; int bsumeven = 0;
        for (int j = 0; j < n; j = j + 2)
        {
            asumeven = asumeven + a[j];
            bsumeven = bsumeven + b[j];
        }
        for (int j = 1; j < n; j = j + 2)
        {
            asumodd = asumodd + a[j];
            bsumodd = bsumodd + b[j];
        }
        if (asumodd == bsumodd && asumeven == bsumeven)
        {
            cout << "YES\n";
        }
        else 
        {
            cout << "NO\n";
        }
    }

}
