#include "katutaso.h"
#include <iostream>

using namespace std;



Katutaso::Katutaso()
{
    cout<<"Katutaso konstruktori"<<endl;

}

Katutaso::~Katutaso()
{

}

void Katutaso::maaritaAsunnot()
{
    //määrritys kahdelle asunnolle
    cout<<"Maaritetaan 2kpl asuntoja Katutaso"<<endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
}

double Katutaso::laskeKulutus(double asukasMaara)
{

    return asukasMaara*100;
}


