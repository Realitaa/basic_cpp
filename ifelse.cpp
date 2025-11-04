#include <iostream>
using namespace std;

int main(){
    int nilai;

    cout<<"======================================="<<endl;
    cout<<"NILAI AKHIR MAHASISWA"<<endl;
    cout<<"======================================="<<endl;
    cout<<"Masukkan nilai anda: ";
    cin>>nilai;

    if(nilai<0||nilai>100){
        cout<<"Nilai anda tidak valid";
    }
    else if(nilai>=85){
        cout<<"Anda mendapatkan nilai: A";
    }
    else if(nilai>=75){
        cout<<"Anda mendapatkan nilai: B";
    }
    else if(nilai>=65){
        cout<<"Anda mendapatkan nilai: C";
    }
    else if(nilai>=55){
        cout<<"Anda mendapatkan nilai: D";
    }
    else if(nilai<55){
        cout<<"Anda mendapatkan nilai: E";
    }


}