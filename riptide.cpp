#include <iostream>
using namespace std;
void swap(int *a, int *b);

int main()
{
    int T;
    cin >> T;
    int a, b, c;
    for (int i = 0; i < T; i++)
    {
        cin >> a >> b >> c;
        while (b < a || c < b || c < a)
        {
            if (b < a)
            {
                swap(&a, &b);
            }
            else if (c < a)
            {
                swap(&a, &c);
            }
            else
            {
                swap(&c, &b);
            }
        }
        if (c - b <= b - a)
        {
            cout << c - b << '\n';
        }
        else 
        {
            cout << b - a << '\n';
        }
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
