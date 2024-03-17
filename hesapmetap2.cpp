
///etap 2
#include <iostream>
using namespace std;

int main()
{

    char islem;
    int sonuc = 0, x, y;

    cout << "İslemi giriniz. isleminiz bitince nokta koyunuz: ";
    cin >> x;
    sonuc = x;

    while (cin >> islem)
    {

        if (islem == '+')
        {
            cin >> y;
            sonuc += y;
            continue;
        }
        else if (islem == '-')
        {
            cin >> y;
            sonuc -= y;
            continue;
        }
        else if (islem == '*')
        {
            cin >> y;
            sonuc *= y;
            continue;
        }
        else if (islem == '/')
        {
            cin >> y;
            sonuc = sonuc / y;
            continue;
        }

        else
        {
            cout << "sonuc: " << sonuc;
            break;
        }
    }

    return 0;
}
