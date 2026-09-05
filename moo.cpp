#include <iostream>
using namespace std;

int main()
{
    int T; cin >> T;
    int n, k;
    string s;
    

    for (int i = 0; i < T; i++)
    {
        int counter = 0;
        int minimum = 0;
        cin >> n >> k >> s;
        for (int j = 0; j < n/k; j++)
        {
            int nhoj = 0; // number of farms owned by nhoj.
            for (int m = 0; m < k; m++)
            {
                if (s[counter] == '1')
                {
                    nhoj++;
                }
                counter++;
            }
            if (nhoj == k)
            {
                minimum++;
            }
        }    
        cout << minimum << '\n';    
    }
}
