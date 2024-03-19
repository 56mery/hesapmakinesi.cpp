
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


//bu da eskiden yapyığımı söylediğim kod(c ile yazilmiştim)

int main()
{
   char nick[10];
   int d;
   printf("dizinin uzunlugunu giriniz:");
   scanf("%d" ,&d);
   while(1){
       if(d>10){
       printf("dizi için boyut çok uzun. lütfen tekrar bir boyut giriniz:");
       scanf("%d" ,&d);
       }
       else break;
       
   }
   
 printf("bir nick giriniz:");
 scanf("%s" ,nick);
 printf("hi,%s" ,nick);
   
   

    return 0;
}
