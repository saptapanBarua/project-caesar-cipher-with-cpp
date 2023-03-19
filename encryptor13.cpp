#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str1[100], str2[100];
    cout << "Enter message: ";
    gets(str1);

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
            str2[i] = alphabets[((str1[i] - 'a') + 13) % 26];
        }
    }

    cout << "Your message: " << str1 << endl;
    cout << "Encrypted message: " << str2 << endl;

    return 0;
}

/* hello world -> URYYB_JBEYQ */
/* drubo barua -> QEHOB_ONEHN */
/* saptapan barua -> FNCGNCNA_ONEHN */
/* zara khan -> MNEN_XUNA */
/* ema watson -> RZN_JNGFBA */
/* the quick brown fox jumps over the lazy dogs -> GUR_DHVPX_OEBJA_SBK_WHZCF_BIRE_GUR_YNML_QBTF */

// link: https://www.youtube.com/watch?v=UzRLgpjX7Xw&ab_channel=StudyTech-Aksadur