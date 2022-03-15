

#include <iostream>
#include <cstring>
#include <sstream>
#include <thread>
#include <chrono>


using namespace std;


int main()
{
    //string txt;                     //stworzenie zmiennej typu string
    //string napis = "Ala ma kota.";  //stworzenie kolejnej zmiennej typu string i wpisanie do niej tekstu
    //while(txt != "xyz")             //pętla wykonująca polecenie getline tak długo aż do zmiennej txt nie zostanie wpisany tekst 'xyz'
    //    getline(cin, txt);          //polecenie wczytujące tekst z klawiatury do zmiennej 'txt'
    //cout << napis;                  //polecenie wypisujące zawartość zmiennej 'napis'
    int state = 0;
    double cena, wplata;
    while (true) {
        switch (state) {
        case 0:
            cout << "Wybierz produkt:\n 1. Baton - 2,46zl\n 2. Napoj - 1,49zl\n 3. Cukierki - 0,79zl\n";
            int pom;
            cin >> pom;
            if (pom == 1) {
                cena = 2.46;
            }
            else if (pom == 2) {
                cena = 1.49;
            }
            else if (pom == 3) {
                cena = 0.79;
            }
            state++;
            break;
        case 1:
            cout << "Do zaplaty:" << cena << "zl" << endl;
            wplata = 0;
            while (cena > wplata)
                cin >> wplata;
            if (wplata > cena)
                cout << "Odbierz produkt i reszte: " << wplata - cena << "zl\n";
            else
                cout << "Odbierz produkt\n";
            state = 0;
            this_thread::sleep_for(chrono::milliseconds(5000));
            break;
        }
    }

}

