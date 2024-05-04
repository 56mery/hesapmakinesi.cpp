//hesap makinesi etap1

#include <iostream>
#include <cstring>
using namespace std;
int fa;
void tekrar(long double sonuc);

long double answer(long double x, char *islem, long double y)
{
    long double sonuc = 0;
    char islem2[2];

    switch (*islem)
    {
    case '+':sonuc = (x + y); break;
    case '-':sonuc = (x - y); break;
    case '*': sonuc = (x * y); break;
    case '/':sonuc = (x / y); break;
    default: { cout << "Geçersiz işlem girdiniz. Tekrar deneyiniz: ";
    cin >> islem2;
    sonuc=answer(x, islem2, y); break; }
    }
    return sonuc;
}

int Devammi(long double sonuc){
    char dizi[6],dizi1[6];
    cout<<sonuc<<" sonucundan devam etmek ister misiniz? ";
    cin>>dizi;
    if(strcmp(dizi,"evet")==0) tekrar(sonuc);
    
    else if (strcmp(dizi,"hayir")==0){
        cout<<"hesap makinesini tekrar kullanmak ister misiniz? ";
        cin>>dizi1;
        if(strcmp(dizi1,"evet")==0) {fa=1;}
        else  fa=0;
    }
    return fa;
}

void tekrar(long double sonuc)
{
    char islem[2], dizi1[6];
    long double z = 0, cevap = 0;

    cout << "isleminizi giriniz: ";
    cin >> islem;
    cout << "diger sayiyi giriniz: ";
    cin >> z;
    cevap = answer(sonuc, islem, z);
    cout << cevap << endl;
    Devammi(cevap);
}


int main()
{
    long double x = 0, y = 0, snc = 0;
    char islem[2], dizi1[6], dizi2[6];

    while (1)
    {
        cout << "İlk sayıyı giriniz: ";
        cin >> x;
        cout << "Yapmak istediğiniz işlemi giriniz: ";
        cin >> islem;
        cout << "Diğer sayıyı giriniz: ";
        cin >> y;
        snc = answer(x, islem, y);
        cout << snc << endl;
        fa=Devammi(snc);
        if(fa==1) continue;
        else break;        
    }
    return 0;
}

//Hesap makinesi bitmiş hali. 04/05/2024
