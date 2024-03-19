
///etap 2
#include <iostream>
using namespace std;

int main()
{

    char islem;
    int sonuc = 0, x, y;

    cout << "İslemi giriniz. isleminiz bitince nokta koyunuz : ";  //enter harici herhangi bir şey olsa da olur. 
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

//efendim etap2 yi iki üç kere kontrol ettim çalısıyor. derleyici farkindan midir acaba neden calismadi sizde.
//ayrica burda da fixleme yapmam lazım farklı bir şeyler girince bozuluyor.
