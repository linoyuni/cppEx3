//
// Created by Linoy Oren Croitoru on 05/06/2024.
//

#include "BuildingCard.h"

void BuildingCard::buildRoad(Player *player,Edge *edge) { //bricks, wood
    player.addRoad();
    edge.setIsRoad(true);
    edge.setPlayer(player.getId();
}

void BuildingCard::buildSettlement(Player *player,Vertex *vertex) { //bricks, wood, wheat, sheep
    player.addSettlement();
    vertex.setPlayer(player.getId());
    vertex.setIsSettlement(true);
}

void BuildingCard::buildCity(Player *player,Vertex *vertex) { //2 wheat 3 ore
    player.addCity();
    vertex.setPlayer(player.getId());
    vertex.setIsSettlement(false);
}
