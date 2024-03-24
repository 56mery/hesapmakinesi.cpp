//hesap makinesi etap1

#include <iostream>
#include <cstring>
using namespace std;

long double answer(long double x, char *islem, long double y)
{
    long double sonuc = 0;

    switch (*islem)
    {
    case '+':sonuc = (x + y); break;
    case '-':sonuc = (x - y); break;
    case '*': sonuc = (x * y); break;
    case '/':sonuc = (x / y); break;
    default: sonuc = 0;       break;
    }

    if (sonuc == 0)
    {
        cout << "Geçersiz işlem girdiniz. Tekrar deneyiniz: "; //islem var mı yok mu kontrol eder
        cin >> islem;
        sonuc = answer(x, islem, y);
    }

    return sonuc;
}

long double tekrar(long double sonuc)
{
    char islem[1], dizi1[5];
    long double z = 0, cevap = 0;

    cout << "isleminizi giriniz: ";
    cin >> islem;
    cout << "diger sayiyi giriniz: ";
    cin >> z;
    cevap = answer(sonuc, islem, z);
    cout << cevap << endl;
    cout << cevap << " sonucundan devam etmek ister misiniz?" << endl;
    cin >> dizi1;
    if (strcmp(dizi1, "evet") == 0)
    {
        cevap = tekrar(cevap);
    }
    else if (strcmp(dizi1, "hayir") == 0)
        return 0;
}

int main()
{
    long double x = 0, y = 0, snc = 0;
    char islem[1], dizi1[5], dizi2[5];

    while (1)
    {
        cout << "İlk sayıyı giriniz: ";
        cin >> x;
        cout << "Yapmak istediğiniz işlemi giriniz: ";  //burada random bir sey girilirse program hatayi yakalar
        cin >> islem;
        cout << "Diğer sayıyı giriniz: ";
        cin >> y;

        snc = answer(x, islem, y);
        cout << snc << endl;
        cout << snc << " sonucundan devam etmek ister misiniz?" << endl;
        cin >> dizi1;

        if (strcmp(dizi1, "evet") == 0)
            snc = tekrar(snc);
        else if (strcmp(dizi1, "hayir") == 0)
            snc = 0;

        if (snc == 0)
        {
            cout << "hesap makinesi tekrar kullanmak ister misiniz: ";
            cin >> dizi2;
            if (strcmp(dizi2, "evet") == 0)
                continue;
                else break;
        }
        
    }
    return 0;
}


//evet hayirlarin ve sayilarin doğru girildiği varsayilan durum
