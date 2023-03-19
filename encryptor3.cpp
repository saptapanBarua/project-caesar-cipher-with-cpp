#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str1[300], str2[300];
    cout<<"Enter message (Only for Alphabet): ";
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
            str2[i] = alphabets[((str1[i] - 'a') + 3) % 26];
        }
    }

    cout << "Your message: " << str1 << endl;
    cout << "Encrypted message: " << str2 << endl;

    return 0;
}

/*
(message + key) mod 26
*/

/* hello world -> KHOOR_ZRUOG */
/* drubo barua -> GUXER_EDUXD */
/* saptapan barua -> VDSWDSDQ_EDUXD */
/* zara khan -> CDUD_NKDQ */
/* ema watson -> HPD_ZDWVRQ */
/* the quick brown fox jumps over the lazy dogs -> WKH_TXLFN_EURZQ_IRA_MXPSV_RYHU_WKH_ODCB_GRJV */