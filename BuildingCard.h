//
// Created by Linoy Oren Croitoru on 05/06/2024.
//

#ifndef BUILDINGCARD_H
#define BUILDINGCARD_H


class BuildingCard {
public:
    void buildRoad(Player *player,Edge  *edge);
    void buildSettlement(Player *player,Vertex *vertex);
    void buildCity(Player *player,Vertex *vertex);
};


#endif //BUILDINGCARD_H
