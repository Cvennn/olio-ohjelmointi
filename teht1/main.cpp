#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int num, luku;
    srand(time(NULL));
    luku=rand()%21;
    cout<<"arvaa luku 0-20"<<endl;
    cin>>num;
    while(num!=luku){
        if(num<luku){
            cout<<"luku on suurempi"<<endl;
            cin>>num;
        }
        if(num>luku){
            cout<<"luku on pienempi"<<endl;
            cin>>num;
        }}
    cout<<"oikea vastaus"<<endl;
    return 0;
}
