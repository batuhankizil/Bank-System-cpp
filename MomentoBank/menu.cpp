//
// Created by Batu on 17.10.2022.
//

#include "menu.h"

void bank::menu() {
    int choice;
    cout<<"------------ Momento Bank ------------ \n\n 1 - Giriş Yapınız \n 2 - Hesap Oluştur \n 3 - Admin Giriş \n 4 - Çıkış \n\n ------------------------------------- \n\n";
    cout<<"Giriş Yapınız : ";
    cin>>choice;

    if(choice == 1){
        login();
    }
    else if(choice == 2){
        create();
    }
    else if (choice == 4){
        exit();
    }
}
