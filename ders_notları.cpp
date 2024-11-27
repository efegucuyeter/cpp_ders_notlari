//bu kodlar vize hazırlığı kapsamında cpp ve dizeler hakkında temel kavramlar içerir

#include <iostream>
using namespace std;

int main(){
    
    int a = 10;//tam sayılar
    float b = 3.14;// ondalıklı sayılar
    char c = 'Efe';// string karakterler
    bool d = true;// doğru yanlış

// cin ve cout

    int x;
cout << "Bir sayı girin: ";
cin >> x;
cout << "Girdiğiniz sayı: " << x;
    return 0;

//for 

for (int i = 0; i < 5; i++) {
    cout << i << " ";
}

//if else

int x = 10;
if (x > 0) {
    cout << "Pozitif";
} else if (x < 0) {
    cout << "Negatif";
} else {
    cout << "Sıfır";
}

//switch case

int a = 2;
switch (a) {
    case 1: cout << "Bir"; break;
    case 2: cout << "İki"; break;
    default: cout << "Diğer";
}

//while

int i = 0;
while (i < 5) {
    cout << i << " ";
    i++;
}

//do-while

int i = 0;
do {
    cout << i << " ";
    i++;
} while (i < 5);

//diziler

int dizi[5] = {10, 20, 30, 40, 50};
cout<< dizi[0];//çıktı 10
cout<< dizi[1];//çıktı 20
cout<< dizi[2];//çıktı 30
cout<< dizi[3];//çiktı 40
cout<< dizi[4];//çıktı 50

//dizi boyutu bulma
int dizi[5] = {10, 20, 30, 40, 50};
int boyut = sizeof(dizi) / sizeof(dizi[0]); // 5
cout << "Dizi boyutu: " << boyut << endl;


//dizilerde eleman güncelleme

dizi[2] = 100; // 3. eleman artık 100 oldu
cout << dizi[2]; // Çıktı: 100

//eleman ekleme

    int dizi[6] = {10, 20, 30, 40, 50}; // Boyut 6, son eleman boş
    dizi[5] = 60; // 6. elemana 60 ekledik

    for (int i = 0; i < 6; i++) {
        cout << dizi[i] << " ";
    }
    // Çıktı: 10 20 30 40 50 60
    return 0;

//eleman çıkarma 

    int dizi[5] = {10, 20, 30, 40, 50};
    int silinecekIndeks = 2;

    // Elemanları sola kaydır
    for (int i = silinecekIndeks; i < 4; i++) {
        dizi[i] = dizi[i + 1];
    }

    // Son eleman boş bırakıldı
    for (int i = 0; i < 4; i++) { // 5 yerine 4 yazıyoruz
        cout << dizi[i] << " ";
    }
    // Çıktı: 10 20 40 50
    return 0;

//eleman arama

int dizi[5] = {10, 20, 30, 40, 50};
int aranan = 30;
bool bulundu = false;

for (int i = 0; i < 5; i++) {
    if (dizi[i] == aranan) {
        bulundu = true;
        break;
    }
}

if (bulundu) {
    cout << "Eleman bulundu!";
} else {
    cout << "Eleman bulunamadı!";
}

//Dizide Maksimum ve Minimum Değeri Bulma

int dizi[5] = {10, 20, 30, 40, 50};
int maksimum = dizi[0];
int minimum = dizi[0];

for (int i = 1; i < 5; i++) {
    if (dizi[i] > maksimum) {
        maksimum = dizi[i];
    }
    if (dizi[i] < minimum) {
        minimum = dizi[i];
    }
}

cout << "Maksimum: " << maksimum << endl;
cout << "Minimum: " << minimum << endl;



}
