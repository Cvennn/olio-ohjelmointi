#include "chef.h"
#include "italianchef.h"

Chef::Chef(string n)
{
    name = n;
    cout<<"Chef "<<name<<" konstruktori"<<endl;
    makeSalad();
    makeSoup();
}

Chef::Chef()
{

    cout<<"Chef default konstruktori"<<endl;
}

Chef::~Chef()
{

    cout<<"Chef "<<name<<" destruktori"<<endl;
}

void Chef::makeSalad()
{

    cout<<"Chef "<<name<<" makes Salad"<<endl;
}

void Chef::makeSoup()
{

    cout<<"Chef "<<name<<" makes Soup"<<endl;
}

