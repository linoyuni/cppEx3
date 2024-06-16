//
// Created by Linoy Oren Croitoru on 05/06/2024.
//

#include "Edge.hpp"

Edge::Edge(std::pair<Vertex, Vertex> vertices) : vertices(vertices), isRoad(false), player(0) {}

std::pair<Vertex, Vertex> Edge::getVertices() {
    return this->vertices;
}

bool Edge::getIsRoad() {
    return this->isRoad;
}

int Edge::getPlayer() {
    return this->player;
}

void Edge::setIsRoad(bool isRoad) {
    this->isRoad = isRoad;
}

void Edge::setPlayer(int player) {
    this->player = player;
}

Edge::~Edge() {
    // Destructor implementation, if needed
}

