//hesap makinesi etap1

#include <iostream>
using namespace std;

int main()
{
    char islem;
    long double sonuc = 0, x, y, d = 1, z, isinizbittimi = 1;
    cout << "\t\t\t\t\t~~Hesap Makinesi~~" << endl;

    while (isinizbittimi)
    {
        cout << "İlk sayiyi giriniz: ";
        cin >> x;
        cout << "Diger sayiyi giriniz: ";
        cin >> y;
        cout << "Yapmak istediginiz islemi giriniz: ";
        cin >> islem;

        if (islem == '+')
        {
            sonuc = (x + y);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '-')
        {
            sonuc = (x - y);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '*')
        {
            sonuc = (x * y);
            cout << "sonuc: " << sonuc << endl;
        }
        if (islem == '/')
        {
            sonuc = (x / y);
            cout << "sonuc: " << sonuc << endl;
        }

        d = 1;
        while (d)
        {
            cout << sonuc << " sonucundan devam etmek ister misiniz, yoksa farklı bir yol mu izleyeceksin? evet ise 1 hayir ise 0'a basiniz: ";
            cin >> d;

            if (d == 0)
                break;

            cout << "Diğer sayiyi giriniz: ";
            cin >> z;
            cout << "Yapmak istediginiz islemi giriniz: ";
            cin >> islem;

            if (islem == '+')
            {
                sonuc = (sonuc + z);
                cout << "sonuc: " << sonuc << endl;
            }
            if (islem == '-')
            {
                sonuc = (sonuc - z);
                cout << "sonuc: " << sonuc << endl;
            }
            if (islem == '*')
            {
                sonuc = (sonuc * z);
                cout << "sonuc: " << sonuc << endl;
            }
            if (islem == '/')
            {
                sonuc = (sonuc / z);
                cout << "sonuc: " << sonuc << endl;
            }
        }

        cout << "Hesap makinesini tekrar kullanmak ister misiniz? ever ise bir hayir ise sifira basiniz: ";
        cin >> isinizbittimi;
        if (isinizbittimi == 0)
            break;
    }

    return 0;
}
