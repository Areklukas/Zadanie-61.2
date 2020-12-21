#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class ciag
{
	int dlugosc;
    int cyfra;
    vector <int cyfra> policz;
    public:
    void oblicz();
	bool sprawdz_czy_szescian(int cyfra);
	bool ciag::sprawdz_czy_szescian(int cyfra)
{
    for (int i=0; i<liczba; i++)
{
    int szescian= i* i * i;
    if (szescian==liczba) return true;
}
return false;
}
void ciag::oblicz()
{
    ifstream plik;
    plik.open("ciagi.txt");
    while(plik.good())
	{
    	plik >> dlugosc;
        for (int i=0; i<dlugosc; i++)
            {
                plik >> cyfra;
                t.push_back(cyfra);
                sprawdz_czy_szescian(cyfra)
            	licz.push_back(cyfra);
            }
    }
    plik.close();
}
int main()
{
	ciag c;
	c.policz();
	
return 0;
}
