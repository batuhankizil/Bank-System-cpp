#include <fstream>
#include "menu.h"

void bank::create() {
    int tc;
    string name,surname,pass,passVerified;
    cout<<"\nAdınız : ";
    cin>>name;
    cout<<"Soyadınız : ";
    cin>>surname;
    cout<<"Şifreniz : ";
    cin>>pass;
    cout<<"Şifrenizi tekrar giriniz : ";
    cin>>passVerified;




    ofstream dosyayayaz;
    dosyayayaz.open("yeni.txt");
    dosyayayaz<<name + " ";
    dosyayayaz<<surname + " ";
    dosyayayaz<<pass;
    dosyayayaz.close();
}