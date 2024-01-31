#include "italianchef.h"


ItalianChef::ItalianChef(string n, int v, int j)
{
    name = n;
    vesi = v;
    jauhot = j;
    cout<<"Chef "<<name<<" konstruktori"<<endl;
    makePasta();
}

string ItalianChef::getName()
{

    return name;
}

void ItalianChef::makePasta()
{
    cout<<"Chef "<<name<<" makes Pasta with a special recipe"<<endl;
    cout<<"Chef "<<name<<" uses jauhot = "<<jauhot<<endl;
    cout<<"Chef "<<name<<" uses vesi= "<<vesi<<endl;
}
