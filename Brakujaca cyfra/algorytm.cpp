#include <iostream>
#include <vector>

using namespace std;

int ZmianaZeZnakuNaLiczbe(char cyfra)
{
    return cyfra - 48;
}

int main()
{
    cout << "Podaj liczbe" << endl;
    string liczba;
    cin >> liczba;
    int suma = 0;

    vector<int> wektor;

    for (int i = 0; i < liczba.length(); i++)
    {
        if (liczba[i] != 'X')
        {
            wektor.push_back(ZmianaZeZnakuNaLiczbe(liczba[i]));
        }
    }

    for (int i = 0; i < wektor.size(); i++)
    {
        suma = suma + wektor[i];
    }

    int szukana = 0;

    for (int i = 0; i < 10; i++)
    {
        if ((suma + i) % 9 == 0)
        {
            szukana = i;
            break;
        }
    }

    cout << szukana;

    return 0;
}
