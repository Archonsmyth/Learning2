#include<iostream>
#include<sstream>
#include "Player.h"
#include <vector>
using std::vector, std::string, std::size_t;

Player::Player(bool isAI) : isAI(isAI), hand{} {

}

void Player::addToHand(Card* c){

    hand.push_back(c);
}

size_t Player::getHandSize(){
    return hand.size();
}

std::string Player::getHandString(){
    std::ostringstream oss;
    bool first = true;
    for(Card* c: hand){ //for each card c in hand
        if(!first) oss << ", ";
        first = false;
        oss << c->getRank() << " " << c->getSuit(); //extracting the specific c's rank from getRank and suit from getSuit to an output stream
    }
    return oss.str();
}

Card* Player::playCard(vector<string> const& suits, string& currentRank, string& currentSuit){
    // TODO: Choose a card to play and return the chosen card. Update currentRank and currentSuit.
    if(isAI){
        if(hand.empty()){
            return nullptr;
        }
        for(int i = 0; i < hand.size(); i++){
            Card* c = hand[i];
            if(c->canBePlayed(currentRank, currentSuit)){
                currentRank = c->getRank();
                if(currentRank == "8"){
                    c->play();
                    currentSuit = c->getSuit();
                    hand.erase(hand.begin()+i);
                    return c;
                }
                currentSuit = c->getSuit();
                c->play();
                hand.erase(hand.begin()+i);
                return c;
            }
        }
        return nullptr;
    }

    return nullptr; //for now...
    // else{ 
    //     std::cout << "This is the current rank and suit: " << currentRank << " " << currentSuit << '\n';
    //     std::cout << "Choose your rank and suit from your hand to play: " << getHandString() << '\n';
        
    // }
    
}