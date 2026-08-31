#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int x, y, z;
    int sumx = 0; int sumy = 0; int sumz = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        sumx = sumx + x;
        sumy = sumy + y;
        sumz = sumz + z;
    }
    if (sumx == 0 && sumy == 0 && sumz == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
