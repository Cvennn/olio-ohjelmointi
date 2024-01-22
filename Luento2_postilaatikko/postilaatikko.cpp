#include "postilaatikko.h"

Postilaatikko::Postilaatikko()
{
// konstruktori, samankaltainen kuin arduinolla setup() funktio
    maara=0;
    cout<<"luodaan postilaatikko"<<endl;
}

void Postilaatikko::lisaaPosti(int m)
{
    maara = m;
    cout<<"lisataan postia "<< maara<<endl;
    cout<<"maara on "<< maara<<endl;
}

void Postilaatikko::otaPosti(int m)
{
    cout<<"otetaan postia "<< m << endl;
    maara=maara-m;
    cout<<"maara on "<< maara<<endl;
}
void Postilaatikko::asetaNimi(string nimi)
{
    cout<<"aseta Nimi";
}
