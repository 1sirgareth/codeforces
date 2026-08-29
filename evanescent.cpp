#include <iostream>
using namespace std;

int compress(string word, int size);

int main(void)
{
    int T; 
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int n; cin >> n;
        string word; cin >> word;
        int left = 0;
        int leftt = 0;
        int right = 0;
        int rightt = 0; // the extra t stands for temporary;
        int indice = -1; // This is the indice of the number deleting which would minimize the length
                         // if it remains -1, it means it doesnt matter what letter you delete.
        for (int j = 1; j < n - 1; j++)
        {
            if (word[j-1] == word[j+1] && word[j] != word[j-1])
            {
                int index = j-1;
                while (word[index] == word[j-1] && index >= 0)
                {
                    leftt++;
                    index--;
                }
                index = j+1;
                while (word[index] == word[j+1] && index <= n - 1)
                {
                    rightt++;
                    index++;
                }
                if (rightt + leftt > right + left)
                {
                    right = rightt;
                    left = leftt;
                    indice = j;
                }
            }
        }
        if (indice == -1)
        {
            for (int j = 1; j < n - 1; j++)
            {
                if (word[j] != word[j-1] && word[j] != word[j+1])
                {
                    word[j] = word[j-1];
                    break;
                }
            }
            cout << compress(word, n) <<'\n';
        }
        else 
        {
            word[indice] = word[indice - 1];
            cout << compress(word, n) << '\n';
        }
    }
}

int compress(string word, int size)
{
    int sizec = size;
    for (int i = 1; i < size; i++)
    {
        if (word[i] == word[i-1])
        {
            sizec--;
        }
    }
    return sizec;
}
