#include "kerros.h"
#include <iostream>

using namespace std;



Kerros::Kerros()
{
    cout<<"Kerros konstruktori"<<endl;

}

Kerros::~Kerros()
{

}

void Kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan 4kpl asuntoja Kerros"<<endl;

    as1.maarita(2,100);
    as2.maarita(2,100);
    as3.maarita(2,100);
    as4.maarita(2,100);
}

double Kerros::laskeKulutus(double h)
{
    return as1.laskeKulutus(h)+as2.laskeKulutus(h)+ as3.laskeKulutus(h)+as4.laskeKulutus(h);

}


