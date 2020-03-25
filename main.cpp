/* Konsolowy kalkulator z wykorzystaniem instrukcji switch case
*/
#include <iostream>
using namespace std;

int main()
{
    int liczba1, liczba2, wynik, wybor; // Definicja zmiennych
    cout << "Witaj w kalkulatorze :)" << endl;
    label2: // etykieta skoku
    cout << "Podaj pierwsza liczbe i wcisnij ENTER" << endl;
    cin >> liczba1;
    cout << "Podaj druga liczbe i wcisnij ENTER" << endl;
    cin >> liczba2;
    label1: // etykieta skoku
    cout << "Wybierz dzialanie, ktore chcesz wykonac i wcisnij ENTER:" << endl;
    cout << "1. Dodawanie \n2. Odejmowanie \n3. Mnozenie \n4. Dzielenie \n5. Dzielenie %" << endl;
    cin >> wybor;

    switch (wybor)
    {
    case 1:
        {
        wynik = liczba1 + liczba2;
        cout << "Wybrales dodawanie:" << liczba1 << " + " << liczba2 << " = " << wynik << endl;
        break;
        }

    case 2:
        {
        wynik = liczba1 - liczba2;
        cout << "Wybrales odejmowanie:" << liczba1 << " - " << liczba2 << " = " << wynik << endl;
        break;
        }

    case 3:
        {
        wynik = liczba1 * liczba2;
        cout << "Wybrales mnozenie:" << liczba1 << " * " << liczba2 << " = " << wynik << endl;
        break;
        }

    case 4:
        {
        if (liczba2==0)
        {
        cout << "Nie dzielimy przez 0 !! \nSprobuj wybrac inne liczby !!" <<endl;
        goto label2;
        }

        else
        {
        wynik = liczba1 / liczba2;
        cout << "Wybrales dzielenie:" << liczba1 << " / " << liczba2 << " = " << wynik << endl;
        break;

    case 5:
        {
        wynik = liczba1 % liczba2;
        cout << "Wybrales dzielenie z reszta:" << liczba1 << " % " << liczba2 << " = " << wynik << endl;
        break;
        }

    default:
        {
        cout << "Dokonales nieprawidlowego wyboru. Sprobuj jeszcze raz" << endl;
        goto label1;
        }

        }
        }

    }

    return 0;
}
