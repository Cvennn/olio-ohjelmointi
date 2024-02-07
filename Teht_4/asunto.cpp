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
    cout<<"Asunnon kulutus = "<< asukasMaara*100 <<endl;
    return asukasMaara*100;
}
