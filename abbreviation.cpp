#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int T; 
    cin >> T;

    int a[26]; // if a[i] is 1 it means that letter is available! 

    int n, m;
    string word;

    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            a[j] = 0;
        }
        int available = 1; // 1 means all abbreviations can be formed.

        cin >> n >> m;
        for (int j = 0; j < n; j++)
        {
            cin >> word;
            a[ word[0] - 'a' ] = 1; 
        }

        for (int j = 0; j < m; j++)
        {
            cin >> word;
            int length = word.length();
            for (int k = 0; k < length; k++)
            {
                if ( a[ word[k] - 'A' ] == 0 )
                {
                    available = 0;
                }
            }
    }
    if (available == 1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    }
}
