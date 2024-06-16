//
// Created by Linoy Oren Croitoru on 05/06/2024.
//

#include "DevelopmentCard.h"



DevelopmentCard::DevelopmentCard(string type) {
    this->type = type;
    this->longestRoad = 0;
    this->largestArmy = 0;
    this->knights = 14;
    this->victoryPoints = 5;
    this->monopoly = 2;
    this->yearOfPlenty = 2;
    this->roadBuilding = 2;
}

std::string DevelopmentCard::getType() {
    return this->type;
}

int DevelopmetCard::getLongestRoad(){
    return this->longestRoad;
}

int DevelopmetCard::getLargestArmy(){
    return this->largestArmy;
}

int DevelopmetCard::getKnights(){
    return this->knights;
}

int DevelopmetCard::getVictoryPoints(){
    return this->victoryPoints;
}

int DevelopmetCard::getMonopoly(){
    return this->monopoly;
}

int DevelopmetCard::getYearOfPlenty(){
    return this->yearOfPlenty;
}

int DevelopmetCard::getRoadBuilding(){
    return this->roadBuilding;
}

void DevelopmetCard::setLongestRoad(int DevelopmetCard::longestRoad){
    this->longestRoad = longestRoad;
}

void DevelopmetCard::setLargestArmy(int DevelopmetCard::largestArmy){
    this->largestArmy = largestArmy;
}

void DevelopmetCard::setKnights(int DevelopmetCard::knights){
    this->knights = knights;
}

void DevelopmetCard::decreaseKnights(){
    this->knights--;
}

void DevelopmetCard::setVictoryPoints(int DevelopmetCard::victoryPoints){
    this->victoryPoints = victoryPoints;
}

void DevelopmetCard::decreaseVictoryPoints(){
    this->victoryPoints--;
}

void DevelopmetCard::setMonopoly(int DevelopmetCard::monopoly){
    this->monopoly = monopoly;
}

void DevelopmetCard::decreaseMonopoly(){
    this->monopoly--;
}

void DevelopmetCard::setYearOfPlenty(int DevelopmetCard::yearOfPlenty){
    this->yearOfPlenty = yearOfPlenty;
}

void DevelopmetCard::decreaseYearOfPlenty(){
    this->yearOfPlenty--;
}

void DevelopmetCard::setRoadBuilding(int DevelopmetCard::roadBuilding){
    this->roadBuilding = roadBuilding;
}

void DevelopmetCard::decreaseRoadBuilding(){
    this->roadBuilding--;
}


DevelopmentCard::~DevelopmentCard() {
    // Destructor implementation, if needed
}

