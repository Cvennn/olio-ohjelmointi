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

double Kerros::laskeKulutus()
{
    //kerroksessa 8 asukasta
    return 8*100;
}

void Kerros::maarita(int asukasMaara, int neliot)
{
    cout<<"Asunto maaritetty asukkaita= "<< asukasMaara <<", nelioita= "<<neliot<<endl;
}

