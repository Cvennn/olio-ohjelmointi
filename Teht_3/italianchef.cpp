#include "italianchef.h"


ItalianChef::ItalianChef(string n, int v, int j)
{
    name = n;
    vesi = v;
    jauhot = j;
    cout<<"Chef "<<name<<" konstruktori"<<endl;
    makePasta(vesi, jauhot);
}

string ItalianChef::getName()
{

    return name;
}

void ItalianChef::makePasta(int water, int flour)
{
    cout<<"Chef "<<name<<" makes Pasta with a special recipe"<<endl;
    cout<<"Chef "<<name<<" uses jauhot = "<<flour<<endl;
    cout<<"Chef "<<name<<" uses vesi= "<<water<<endl;
}
