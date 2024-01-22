#include "game.h"

game::game(int i) {
    //konstruktori
    maxNumber=i;
    cout<<"GAME CONSTRUCTOR: initialized with "<<maxNumber<<" as a maximum value."<<endl;
}

game::~game(){
    //destruktori
    cout<<"GAME DESTRUCTOR: object cleared from memory."<<endl;
}

void game::play()
{
    srand(time(NULL));
    randomNumber=rand()%maxNumber;
    cout<<"Arvaa luku 0-"<<maxNumber<<endl;
    cin>>playerGuess;
    while(playerGuess!=randomNumber){
        if(playerGuess<randomNumber){
            numOfGuesses++;
            cout<<"Luku on suurempi"<<endl;
            cout<<"Arvaa luku 0-"<<maxNumber<<endl;
            cin>>playerGuess;
        }
        if(playerGuess>randomNumber){
            numOfGuesses++;
            cout<<"Luku on pienempi"<<endl;
            cout<<"Arvaa luku 0-"<<maxNumber<<endl;
            cin>>playerGuess;
        }}
    numOfGuesses++;
    printGameResult();
}

void game::printGameResult()
{
    cout<<"Oikea vastaus. Numero oli "<<randomNumber<<", Arvauksia "<<numOfGuesses<<endl;
}
