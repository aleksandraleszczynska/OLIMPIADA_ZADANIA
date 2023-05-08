#include <iostream>

using namespace std;

int ZmianaZeZnakuNaLiczbe (char cyfra)
{
    return cyfra - 34;
}

int main()
{
    cout << "Podaj liczbe" << endl;
    string liczba;
    cin >> liczba;
    int suma = 0;
    int z = 0;

    int tablicaliczb[liczba.length()-1];

    for(int i = 0; i < liczba.length(); i++)
    {
        if(liczba[i] != 'X')
        {
            tablicaliczb[z] = ZmianaZeZnakuNaLiczbe(liczba[i]);
            suma = suma + tablicaliczb[z];
            z++;
        }
    }

    int szukana = 0;

    for (int i = 0; i < 10; i++)
    {
        if ((suma + i) % 9 == 0 )
        {
            szukana = i;
            break;
        }
    }

    cout << szukana;


    return 0;
}
