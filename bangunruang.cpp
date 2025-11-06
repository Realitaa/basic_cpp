#include <iostream>
#include <math.h> 
using namespace std;

int main(){
    int milih;
    double luas, volume, a, b, c, d, e, pi=3.14; 


    cout << "========================================" << endl;
    cout << "   KALKULATOR LUAS PERMUKAAN & VOLUME BANGUN RUANG " << endl; 
    cout << "========================================" << endl;
    cout << "Pilih bangun ruang:" << endl; 
    cout << "1. Kubus" << endl;
    cout << "2. Balok" << endl;
    cout << "3. Prisma Segitiga" << endl;
    cout << "4. Limas Segitiga" << endl;
    cout << "5. Limas Segiempat" << endl;
    cout << "6. Kerucut" << endl;
    cout << "7. Tabung" << endl;
    cout << "8. Bola" << endl;
    cout << "\nMasukkan pilihan Anda : ";
    cin >> milih;

    cout << "========================================" << endl;

    switch (milih)
    {
    case 1:
        cout << "Anda memilih Kubus" << endl;
        cout << "Masukkan sisi (rusuk): ";
        cin >> a; 

        luas = 6 * pow(a, 2);
        volume = pow(a, 3);

        cout << "Luas Permukaan Kubus adalah: " << luas << endl;
        cout << "Volume Kubus adalah: " << volume << endl;
        break;

    case 2:
        cout << "Anda memilih Balok" << endl;
        cout << "Masukkan Panjang: ";
        cin >> a; 
        cout << "Masukkan Lebar: ";
        cin >> b; 
        cout << "Masukkan Tinggi: ";
        cin >> c; 

        luas = 2 * ((a * b) + (a * c) + (b * c));
        volume = a * b * c;
        
        cout << "Luas Permukaan Balok adalah: " << luas << endl;
        cout << "Volume Balok adalah: " << volume << endl;
        break;

    case 3:
        cout << "Anda memilih Prisma Segitiga" << endl;
        cout << "Masukkan alas segitiga (sisi a): ";
        cin >> a; 
        cout << "Masukkan tinggi segitiga (sisi b): ";
        cin >> b; 
        
        c = sqrt(pow(a, 2) + pow(b, 2)); 
        cout << "Sisi miring segitiga (sisi c) adalah: " << c << endl;
        
        cout << "Masukkan tinggi prisma: ";
        cin >> d; 

        luas = (2 * (0.5 * a * b)) + ((a + b + c) * d);
        volume = (0.5 * a * b) * d;

        cout << "Luas Permukaan Prisma adalah: " << luas << endl;
        cout << "Volume Prisma adalah: " << volume << endl;
        break;

    case 4:
        cout << "Anda memilih Limas Segitiga (Beraturan)" << endl;
        cout << "Masukkan sisi alas segitiga: ";
        cin >> a; 
        cout << "Masukkan tinggi alas segitiga: ";
        cin >> b; 
        cout << "Masukkan tinggi limas: ";
        cin >> c; 
        cout << "Masukkan tinggi sisi tegak (selimut): ";
        cin >> d; 

        luas = (0.5 * a * b) + (3 * (0.5 * a * d));
        volume = (1.0/3.0) * (0.5 * a * b) * c;

        cout << "Luas Permukaan Limas adalah: " << luas << endl;
        cout << "Volume Limas adalah: " << volume << endl;
        break;

    case 5:
        cout << "Anda memilih Limas Segiempat (Alas Persegi)" << endl;
        cout << "Masukkan sisi alas persegi: ";
        cin >> a; 
        cout << "Masukkan tinggi limas: ";
        cin >> b; 
        cout << "Masukkan tinggi sisi tegak (selimut): ";
        cin >> c; 

        luas = pow(a, 2) + (4 * (0.5 * a * c));
        volume = (1.0/3.0) * pow(a, 2) * b;
        
        cout << "Luas Permukaan Limas adalah: " << luas << endl;
        cout << "Volume Limas adalah: " << volume << endl;
        break;
    case 6:
        cout << "Anda memilih Kerucut" << endl;
        cout << "Masukkan jari-jari alas: ";
        cin >> a; 
        cout << "Masukkan tinggi kerucut: ";
        cin >> b; 
        
        c = sqrt(pow(a, 2) + pow(b, 2)); 

        luas = (pi * pow(a, 2)) + (pi * a * c);
        volume = (1.0/3.0) * pi * pow(a, 2) * b;

        cout << "Garis pelukis (s) adalah: " << c << endl;
        cout << "Luas Permukaan Kerucut adalah: " << luas << endl;
        cout << "Volume Kerucut adalah: " << volume << endl;
        break;

    case 7:
        cout << "Anda memilih Tabung" << endl;
        cout << "Masukkan jari-jari alas: ";
        cin >> a; 
        cout << "Masukkan tinggi tabung: ";
        cin >> b; 

        luas = 2 * pi * a * (a + b);
        volume = pi * pow(a, 2) * b;

        cout << "Luas Permukaan Tabung adalah: " << luas << endl;
        cout << "Volume Tabung adalah: " << volume << endl;
        break;
    
    case 8:
        cout << "Anda memilih Bola" << endl;
        cout << "Masukkan jari-jari bola: ";
        cin >> a; 

        luas = 4 * pi * pow(a, 2);
        volume = (4.0/3.0) * pi * pow(a, 3);

        cout << "Luas Permukaan Bola adalah: " << luas << endl;
        cout << "Volume Bola adalah: " << volume << endl;
        break;

     case 9: 
        cout << "Anda memilih Prisma Segienam Beraturan" << endl;
        cout << "Masukkan sisi alas segi enam: ";
        cin >> a;
        cout << "Masukkan tinggi prisma: ";
        cin >> b;

        volume = ((3 * pow(a, 2) * sqrt(3)) / 2.0) * b;
        luas = (3 * pow(a, 2) * sqrt(3)) + ((6 * a) * b);

        cout << "Volume adalah: " << volume << endl;
        cout << "Luas Permukaan adalah: " << luas << endl;
        break;

    default:
        cout << "Pilihan tidak valid." << endl;
        break;
    }

    return 0; 
}