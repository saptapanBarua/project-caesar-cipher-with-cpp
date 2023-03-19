#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str1[300];
    cout << "Enter message (Only for Alphabet): ";
    cin >> str1;

    char alphabets[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    for (int i = 1; i <= 26; i++)
    {
        for (int j = 0; str1[j] != '\0'; j++)
        {
            if (str1[j] == '_')
            {
                cout << " ";
            }
            else
            {
                cout << char(tolower(alphabets[(str1[j] - i) % 26]));
            }
        }
        cout << endl;
    }

    return 0;
}

/*
(message - key) mod 26
*/