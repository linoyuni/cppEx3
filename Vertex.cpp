//
// Created by Linoy Oren Croitoru on 05/06/2024.
//

#include "Vertex.hpp"

Vertex::Vertex(int x, int y){
    this->x = x;
    this->y = y;
    this->isOccupied = false;
    this->player = 0;
    this->type = "";
}

Vertex::Vertex(int x, int y, bool isOccupied, int player, int type) {
    this->x = x;
    this->y = y;
    this->isOccupied = isOccupied;
    this->player = player;
    this->type = type;
}

int Vertex::getX() {
    return this->x;
}

int Vertex::getY() {
    return this->y;
}

bool Vertex::getIsOccupied() {
    return this->isOccupied;
}

int Vertex::getPlayer() {
    return this->player;
}

string Vertex::getType() {
    return this->type;
}

void Vertex::setX(int x) {
    this->x = x;
}

void Vertex::setY(int y) {
    this->y = y;
}

void Vertex::setIsOccupied(bool isOccupied) {
    this->isOccupied = isOccupied;
}

void Vertex::setPlayer(int player) {
    this->player = player;
}

void Vertex::setType(string type) {
    this->type = type;
}

Vertex::~Vertex() {
    // TODO Auto-generated destructor stub
}

#include "Vertex.hpp"
