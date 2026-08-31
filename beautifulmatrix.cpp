#include <iostream>
using namespace std;

int main()
{
    int matrix[5][5];
    int a, b;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                a = i; b = j;
            }
        }
    }
    int steps = 0;
    if (a >= 2)
    {
        steps = steps + a - 2;
    }
    else 
    {
        steps = steps + 2 - a;
    }
    if (b >= 2)
    {
        steps = steps + b - 2;
    }
    else 
    {
        steps = steps + 2 - b;
    }
    cout << steps << '\n';
}
