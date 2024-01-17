#include <iostream>
#include <cstdlib>
using namespace std;

void game(){
    int luku, num;
    srand(15);
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
}

int main()
{
    game();
    return 0;
}
