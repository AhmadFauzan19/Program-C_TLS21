#include <iostream>
#include <windows.h>

using namespace std;

void automatic_screenshot() {

    system("explorer C:\\Users\\acer\\AppData\\Local\\Microsoft\\Teams\\current\\Teams.exe");

    Sleep(3000);

    keybd_event(VK_LWIN, 0, 0, 0); 
    keybd_event(VK_SNAPSHOT, 0, 0, 0); 

    keybd_event(VK_SNAPSHOT, 0, KEYEVENTF_KEYUP, 0); 
    keybd_event(VK_LWIN, 0, KEYEVENTF_KEYUP, 0); 

    Sleep(3000);

    system("explorer C:\\Users\\acer\\Pictures\\Screenshots");

    Sleep(3000);
}

void data_diri() {
    cout << "\nNIU : 474804" << endl;
    cout << "Nama : Ahmad Fauzan" << endl;
    cout << "NIM : 21/474804/TK/52394" << endl;
}

void menu_presensi() {
    
    int choice;

    cout << "\n========== Presensi ==========" << endl;
    cout << "1. Bahasa dan Penulisan Ilmiah" << endl;
    cout << "2. Kalkulus Variabel Jamak" << endl;
    cout << "3. Teori Vektor dan Matriks" << endl;
    cout << "4. Fisika, Fluida, Kalor, dan Gelombang" << endl;
    cout << "5. Pemrograman Dasar" << endl;
    cout << "Masukkan pilihan sesuai nomor menu : ";
    cin >> choice;

    automatic_screenshot();

    switch(choice) {
        case 1 :
            system("start https://forms.gle/Ni1wKhVdDTcExPep8");           
            break;
        case 2 :
            system("start https://forms.gle/77dWMoj2A27dnJY56");
            break;
        case 3 :
            system("start https://forms.gle/hDy2zAdMwV8o9jyZ8");
            break;
        case 4 :
            system("start https://forms.gle/fFJ8cKvT2yfHNSak8");
            break;
        case 5 :
            system("start https://forms.gle/g1CwyTQX719bMJ1W7");
            break;
        default :
            cerr << "Pilihan menu yang Anda masukkan salah";
            break;
    }

    data_diri();
}

void menu() {

    int choice;

    cout << "\n========== MENU ==========" << endl;
    cout << "1. Presensi" << endl;
    cout << "2. Close" << endl;
    cout << "Masukkan pilihan sesuai nomor menu : ";
    cin >> choice;

    switch(choice) {
        case 1 :
            menu_presensi();
            break;
        case 2 :
            exit(EXIT_SUCCESS);
        default :
            cerr << "Pilihan menu yang Anda masukkan salah";
            break;
    }
}

int main() {

    while(true) {
        menu();
    }

    return 0;
}