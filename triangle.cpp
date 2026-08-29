#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];

    for (int i = 0; i < 3; i++)
    {
        int smallest = a[i];
        int index = i;
        for (int j = i + 1; j < 4; j++)
        {
            if (a[j] < smallest)
            {
                smallest = a[j];
                index = j;
            }
        }
        swap(&a[i], &a[index]);
    }
    if (a[0] + a[1] > a[2] || a[1] + a[2] > a[3])
    {
        cout << "TRIANGLE\n";
    }
    else if (a[0] + a[1] == a[2] || a[1] + a[2] == a[3])
    {
        cout << "SEGMENT\n";
    }
    else
    {
        cout << "IMPOSSIBLE\n";
    }
}
