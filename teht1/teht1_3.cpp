#include <iostream>
#include <cstdlib>
using namespace std;

int game(int maxnum){
    int luku, num, count=1;
    srand(time(NULL));
    luku=rand()%maxnum;
    cout<<"arvaa luku 0-"<<maxnum<<endl;
    cin>>num;
    while(num!=luku){
        if(num<luku){
            cout<<"luku on suurempi"<<endl;
            cin>>num;
            count++;
        }
        if(num>luku){
            cout<<"luku on pienempi"<<endl;
            cin>>num;
            count++;
        }}
    cout<<"oikea vastaus"<<endl;
    return count;
}

int main()
{
    int maxnum,result;
    cout<<"korkein arvottava numero"<<endl;
    cin>>maxnum;
    result=game(maxnum);
    cout<<"Arvauksia "<<result<<endl;
    return 0;
}
