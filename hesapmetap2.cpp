
///etap 2
#include <iostream>
using namespace std;

int main()
{

    char islem;
    long double sonuc = 0, x, y;

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


/*  chatle yaptığımız kod ama hataları var hala protatip olarak kalsın diye koydum

#include <iostream>
using namespace std;

int main() {
    char islem;
    long double sonuc = 0, x = 0, y = 0;

    cout << "İslemi giriniz. İşleminizi tamamladığınızda Enter'a basınız: ";
    cin >> sonuc; 
    
    
    while (cin.get(islem) && islem != '\n') {
        if (islem == '+' || islem == '-' || islem == '*' || islem == '/') {
            cin >> y;
            if (islem == '+') {
                sonuc += y;
            } else if (islem == '-') {
                sonuc -= y;
            } else if (islem == '*') {
                sonuc *= y;
            } else if (islem == '/') {
                sonuc /= y;
            }
        } else {
            
            cout << "Geçersiz işlem! Program sonlandırılıyor." << endl;
            //return 1;
        }
    }

    cout << "Sonuç: " << sonuc << endl;

    return 0;
}
*/
