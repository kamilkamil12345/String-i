#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{   //---------------------------------------------------------------------------
    cout << "Konkatenacja - sklejanie dwoch napisow" << endl;
    string pierwszy="Raz, dwa";
    string drugi=", trzy!";
    string suma;

    suma = pierwszy + drugi;

    cout << suma << endl;
    //---------------------------------------------------------------------------

    cout << "Zmiana wielkosci liter." << endl;
    string napis = "Ala ma kota";
    transform(napis.begin(),napis.end(),napis.begin(),::toupper);
    cout << napis << endl;
    transform(napis.begin(),napis.end(),napis.begin(),::tolower);
    cout << napis << endl;
    //---------------------------------------------------------------------------

    cout << "znajdowanie frazy w ciagu string" << endl;
    string fraza = "Pies robi hau hau";
    string szukaj = "robi";

    size_t pozycja = fraza.find(szukaj);

    if (pozycja!=string::npos)  {cout << "Szukana fraza znaleziona na pozycji nr. " << pozycja << endl;}
    else                        {cout << "Nie ma takiej frazy" << endl;}
    //---------------------------------------------------------------------------
    cout << "Kasowanie czesci stringa" << endl;
    string napis1 = "Ala ma kota";
    napis1.erase(3,3); //kasowanie frazy od znaku 3, kasowanie 3 znaków
    cout << napis1 << endl;
    //---------------------------------------------------------------------------
    cout << "Dodawanie frazy stringa" << endl;
    string napis2 = "Ala ma kota";
    napis2.insert(11,", a kot miauczy."); //wstaw od znaku 11 taka fraze
    cout << napis2 << endl;
    //---------------------------------------------------------------------------
    cout << "Zastepowanie jakiejs frazy stringa" << endl;
    string napis3 = "Ala ma kota";
    napis3.replace(0,3,"Andrzej"); //od jakiego znaku zaczac, ile znakow zast¹piæ, czym zast¹piæ
    cout << napis3 << endl;
    //---------------------------------------------------------------------------
    cout << "Wyjecie frazy ze stringa i zapis do nowej zmiennej" << endl;
    string napis4 = "Ala ma kota";
    string nowynapis = napis4.substr(4,7); //wyjmij 7 znaków od indeksu 4
    cout << "Nowy " << nowynapis << endl;
    cout << "Stary " << napis4 << endl;

    return 0;
}
