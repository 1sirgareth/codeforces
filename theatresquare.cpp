#include <iostream>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    int s1, s2;
    if (n % a == 0)
    {
        s1 = n/a;
    }
    else
    {
        s1 = n/a + 1;
    }
    if (m % a == 0)
    {
        s2 = m/a;
    }
    else
    {
        s2 = m/a + 1;
    }
    long long answer = (long long) s1 * s2;
    cout << answer << '\n';
}   
