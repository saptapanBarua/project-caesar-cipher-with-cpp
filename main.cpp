#include <bits/stdc++.h>
using namespace std;

void makeEncryptWith3keys(char *str1, char *str2)
{
    char alphabets[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    for (int i = 0; str1[i] != '\0'; i++)
    {
        str1[i] = tolower(str1[i]);
        if (str1[i] == ' ')
        {
            str2[i] = '_';
        }
        else if (str1[i] != ' ')
        {
            str2[i] = alphabets[((str1[i] - 'a') + 3) % 26];
        }
    }

    cout << "Your message: " << str1 << endl;
    cout << "Encrypted message: " << str2 << endl;
}

int main()
{
    flag:
        cout << "Choose a option" << endl;
        cout << "1. Make an encrypted message with 3key" << endl;
        cout << "2. Make an encrypted message with 13keys" << endl;
        cout << "3. Make an encrypted message in advance" << endl;
        cout << "4. Decrypt an encrypted message" << endl;
        cout << "5. Exit" << endl;
        int option;
        cin >> option;

        switch (option)
        {
        case 1:
            char str1[300], str2[300];
            cout << "Enter message (Only for Alphabet): ";
            gets(str1);

            makeEncryptWith3keys(str1, str2);
            break;

        case 2:
            cout << "Processing" << endl;
            break;

        case 3:
            cout << "Processing" << endl;
            break;

        case 4:
            cout << "Processing" << endl;
            break;

        case 5:
            return 0;

        default:
            cout << "Invalid option." << endl;
        }
        goto flag;

    return 0;
}

/* problem is auto enter with 1 option */