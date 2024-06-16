//
// Created by Linoy Oren Croitoru on 05/06/2024.
//

#include "Player.hpp"

Player::Player(int playerID, std::string color){
    this->playerID = playerID;
    this->color = color;
    this->victoryPoints = 0;
    this->bricks = 0;
    this->wool = 0;
    this->ore = 0;
    this->grain = 0;
    this->lumber = 0;
    this->knights = 0;
    this->roads = 0;
    this->settlements = 0;
    this->cities = 0;
    this->longestRoad = false;
    this->largestArmy = false;
}

int Player::getPlayerID(){
    return this->playerID;
}

std::string Player::getColor(){
    return this->color;
}

int Player::getVictoryPoints(){
    return this->victoryPoints;
}

int Player::getBricks(){
    return this->bricks;
}

int Player::getWool(){
    return this->wool;
}

int Player::getOre(){
    return this->ore;
}

int Player::getGrain(){
    return this->grain;
}

int Player::getLumber(){
    return this->lumber;
}

int Player::getKnights(){
    return this->knights;
}

int Player::getRoads(){
    return this->roads;
}

int Player::getSettlements(){
    return this->settlements;
}

int Player::getCities(){
    return this->cities;
}

bool Player::getLongestRoad(){
    return this->longestRoad;
}

bool Player::getLargestArmy(){
    return this->largestArmy;
}

void Player::setVictoryPoints(int victoryPoints){
    this->victoryPoints = victoryPoints;
}

void Player::addVictoryPoints(int n){
    this->victoryPoints += n;
}

void Player::addVictoryPoint(){
    this->victoryPoints++;
}

void Player::setBricks(int bricks){
    this->bricks = bricks;
}

void Player::addBricks(int n){
    this->bricks += n;
}

void Player::setWool(int wool){
    this->wool = wool;
}

void Player::addWool(int n){
    this->wool += n;
}

void Player::setOre(int ore){
    this->ore = ore;
}

void Player::addOre(int n){
    this->ore += n;
}

void Player::setGrain(int grain){
    this->grain = grain;
}

void Player::addGrain(int n){
    this->grain += n;
}

void Player::setLumber(int lumber){
    this->lumber = lumber;
}

void Player::addLumber(int n){
    this->lumber += n;
}

void Player::setKnights(int knights){
    this->knights = knights;
}

void Player::addKnight(){
    this->knights++;
}

void Player::setRoads(int roads){
    this->roads = roads;
}

void Player::addRoad(){
    this->roads++;
}

void Player::setSettlements(int settlements){
    this->settlements = settlements;
    this->victoryPoints = settlements;
}

void Player::addSettlement(){
    this->settlements++;
    this->victoryPoints++;
}


void Player::addCity(){
    this->cities++;
    this->settlements--;
    this->victoryPoints++;
}

void Player::setLongestRoad(bool longestRoad){
    this->longestRoad = longestRoad;
}

void Player::setLargestArmy(bool largestArmy){
    this->largestArmy = largestArmy;
}

std::vector<DevelopmentCard> Player::getDevelopmentCards(){
    return this->developmentCards;
}

void Player::addDevelopmentCard(DevelopmentCard dc){
    this->developmentCards.add(dc);
}
