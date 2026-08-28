#include <iostream>
using namespace std;

void swap(int *a, int *b);

int main(void)
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
                swap(&c, &a);
            }
            else if (c < b)
            {
                swap(&c, &b);
            }
        }
        while (c > a + b)
        {
            c = a + b;
        }
        cout << c - a << '\n';
    }
    return 0;
}



void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
