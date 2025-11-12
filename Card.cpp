#include<cctype>
#include<stdexcept>
#include "Card.h"
using std::string;

Card::Card(string rank, string suit) : rank(rank), suit(suit), timesPlayed(0) {
    if(rank.empty()){
        throw std::invalid_argument("Invalid Rank");
    }
    if(suit.empty()){
        throw std::invalid_argument("Invalid Suit");
    }
   
    for(char c: rank){
        if(!std::isalnum(c)){
             throw std::invalid_argument("Not alphanumeric input");
        }
    }
    for(char c: suit){
        if(!std::isalnum(c)){
            throw std::invalid_argument("Not alphanumeric input");
        }
    } 

}

string Card::getRank(){
    return rank;
}

string Card::getSuit(){
    return suit;
}   

int Card::getTimesPlayed(){
    return timesPlayed;
}

bool Card::canBePlayed(string currentRank, string currentSuit){

    if(currentRank == rank || currentSuit == suit){
        return true;
    }
    else if(rank == "8"){
        return true;
    }
    else{
        return false;
    }
}

//You don't need to modify this
void Card::play(){
    timesPlayed++;
}