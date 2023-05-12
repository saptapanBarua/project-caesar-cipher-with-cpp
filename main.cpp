#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

/*******Encrypt with Caeser Cipher**********/
void encryptWithCeaserCipher(char *str1, char *alphabets)
{
    string str2;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        str1[i] = tolower(str1[i]);
        if (str1[i] == ' ')
        {
            str2 += '_';
        }
        else if (str1[i] != ' ')
        {
            str2 += alphabets[((str1[i] - 'a') + 3) % 26];
        }
    }

    cout << "Your message: " << str1 << endl;
    cout << "Encrypted message: " << str2 << endl;
}

/*******Decrypt with Caeser Cipher**********/
void decryptWithCeaserCipher(char *str1, char *alphabets)
{
}

/*******Encrypt with Shift Cipher**********/
void encryptWithShiftCipher(char *str1, char *alphabets)
{
    string str2;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        str1[i] = tolower(str1[i]);
        if (str1[i] == ' ')
        {
            str2 += '_';
        }
        else if (str1[i] != ' ')
        {
            str2 += alphabets[((str1[i] - 'a') + 13) % 26];
        }
    }

    cout << "Your message: " << str1 << endl;
    cout << "Encrypted message: " << str2 << endl;
}

/*******Decrypt with Shift Cipher**********/
void decryptWithShiftCipher(char *str1, char *alphabets)
{
    int len = strlen(str1);
    if (len > 0 && str1[len - 1] == '\n')
    {
        str1[--len] = '\0';
    }

    for (int i = 1; i <= 26; i++)
    {
        for (int j = 0; j < len; j++)
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
}

/*******Encrypt with Hill Cipher**********/
void encryptWithHillCipher()
{
    cout<<"Processing"<<endl;
}

/*******Decrypt with Hill Cipher**********/
void decryptWithHillCipher()
{
    cout<<"Processing"<<endl;
}

int main()
{
    char alphabets[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    while (true)
    {
        cout << "Which cipher do you want to use?" << endl;
        cout << "1. Caeser cipher" << endl;
        cout << "2. Shift cipher" << endl;
        cout << "3. Hill Cipher" << endl;
        cout << "4. **********" << endl;
        cout << "5. Exit" << endl;
        int option1;
        cout << "Choose a option : ";
        cin >> option1;
        char str1[300], str2[300];

        switch (option1)
        {
        case 1:
            cout << "Which one do you want to use?" << endl;
            cout << "1. Encrypt" << endl;
            cout << "2. Decrypt" << endl;
            int option2;
            cout << "Choose a option : ";
            cin >> option2;

            if (option2 == 1)
            {
                cout << "Enter message (Only for Alphabet): ";
                cin.ignore(); // clear input buffer
                fgets(str1, 300, stdin);
                str1[strcspn(str1, "\n")] = '\0'; // Remove newline character
                encryptWithCeaserCipher(str1, alphabets);
            }
            else if (option2 == 2)
            {
            }

            break;

        case 2:
            cout << "Which one do you want to use?" << endl;
            cout << "1. Encrypt" << endl;
            cout << "2. Decrypt" << endl;
            int option2;
            cout << "Choose a option : ";
            cin >> option2;

            if (option2 == 1)
            {
                cout << "Enter message (Only for Alphabet): ";
                cin.ignore(); // clear input buffer
                fgets(str1, 300, stdin);
                str1[strcspn(str1, "\n")] = '\0'; // Remove newline character
                encryptWithShiftCipher(str1, alphabets);
            }
            else if (option2 == 2)
            {
            }

            break;

        case 3:
            // cout << "Enter message (Only for Alphabet): ";
            // cin.ignore(); // clear input buffer
            // fgets(str1, 300, stdin);
            // str1[strcspn(str1, "\n")] = '\0'; // Remove newline character
            cout << "Processing" << endl;
            break;

        case 4:
            cout << "Processing";
            break;

        case 5:
            return 0;

        default:
            cout << "Invalid option." << endl;
        }
    }

    return 0;
}

/* problem is auto enter with 1 option */
/* drubo barua(3) -> GUXER_EDUXD█∙⌂ */
/* drubo barua(13) QEHOB_ONEHNo */