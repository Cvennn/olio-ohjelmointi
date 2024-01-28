#include "chef.h"


Chef::Chef(string i)
{
    name = i;
    cout<<"Chef "<<name<<" konstruktori"<<endl;
    makeSalad();
    makeSoup();
}

Chef::Chef()
{

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

