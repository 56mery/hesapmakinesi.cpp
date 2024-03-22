//hesap makinesi etap1

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char dizi1[10], dizi2[10];
    char islem;
    long double sonuc = 0, x, y, z;
    cout << "\t\t\t\t\t~~Hesap Makinesi~~" << endl;

    while (1)
    {
        cout << "İlk sayiyi giriniz: ";
        cin >> x;
        cout << "Diger sayiyi giriniz: ";
        cin >> y;
        cout << "Yapmak istediginiz islemi giriniz: ";
        cin >> islem;

        while (1)
        {
            if (islem == '+' || islem == '-' || islem == '*' || islem == '/')
            {
                break;
            }
            else
            {
                cout << "Olmayan islem girdiniz. Tekrar deneyiniz:  ";
                cin >> islem;
            }
        }

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

        while (1)
        {
            cout << sonuc << " sonucundan devam etmek ister misiniz? " << endl;
            cin >> dizi1;

            if (strcmp(dizi1, "hayir") == 0)
                break;

            else if (strcmp(dizi1, "evet") == 0)
            {

                cout << "Diğer sayiyi giriniz: ";
                cin >> z;
                cout << "Yapmak istediginiz islemi giriniz: ";
                cin >> islem;

                while (1)
                {
                    if (islem == '+' || islem == '-' || islem == '*' || islem == '/')
                    {
                        break;
                    }
                    else
                    {
                        cout << "Olmayan islem girdiniz. Tekrar deneyiniz:  ";
                        cin >> islem;
                    }
                }

                if (islem == '+')
                {
                    sonuc = (sonuc + z);
                    cout << "sonuc: " << sonuc << endl;
                    continue;
                }
                if (islem == '-')
                {
                    sonuc = (sonuc - z);
                    cout << "sonuc: " << sonuc << endl;
                    continue;
                }
                if (islem == '*')
                {
                    sonuc = (sonuc * z);
                    cout << "sonuc: " << sonuc << endl;
                    continue;
                }
                if (islem == '/')
                {
                    sonuc = (sonuc / z);
                    cout << "sonuc: " << sonuc << endl;
                    continue;
                }
            }

            else
            {
                cout << "Gecersiz cevap girdiniz. Evet ve ya hayir giriniz" << endl;
                continue;
            }
        }

        cout << "Hesap makinesini tekrar kullanmak ister misiniz? ";
        cin >> dizi2;

        if (strcmp(dizi2, "hayir") == 0)
            break;

        else if (strcmp(dizi2, "evet") == 0)
            continue;

        else
        {
            while (1)
            {
                cout << "Gecersiz cevap girdiniz. Evet ya da hayir'i deneyiniz: ";
                cin >> dizi2;
                if (strcmp(dizi2, "hayir") == 0)
                    break;
                else if (strcmp(dizi2, "evet") == 0)
                    break;
            }

            if (strcmp(dizi2, "evet") == 0)
                continue;

            else if (strcmp(dizi2, "hayir") == 0)
                break;
        }
    }

    return 0;
}


//sayi girilmeyen durumu kontrol için değişkeni char yapmam gerekiyor ama char aralığı long double a göre coook kucuk kalıyor
//yani o yzden o kismi atlamamız gerekiyor galiba 
//onun dısındaki tek sorunu yanlış veri girisinde ne kadar veri girersen o kadar yanlış girdiğini söylüyor 
//hata vermiyor çalışıyor veriyi doğru kontrol ediyor ama mesela qwe yazınca üç kere "geçersiz ..." diyor
//sadece q yazarsan sadece bir kere diyor nedenini çözemedim
