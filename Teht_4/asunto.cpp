#include "asunto.h"
#include <iostream>

using namespace std;

Asunto::Asunto()
{
    cout<<"Asunto luotu"<<endl;
}

Asunto::~Asunto()
{

}

void Asunto::maarita(int i, int j)
{
    asukasMaara=i;
    neliot=j;

    cout<<"Asunto maaritetty asukkaita= "<< asukasMaara <<", nelioita= "<<neliot<<endl;

}

double Asunto::laskeKulutus(double asukasMaara)
{

    return asukasMaara*100;
}
