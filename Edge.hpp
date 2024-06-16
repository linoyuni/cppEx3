//
// Created by Linoy Oren Croitoru on 05/06/2024.
//

#ifndef EDGE_H
#define EDGE_H
#include "Vertex.hpp"



class Edge {
private:
    std::pair<Vertex, Vertex> vertices;
    bool isRoad;
    int player;
public:
    Edge(std::pair<Vertex, Vertex> vertices);
    std::pair<Vertex, Vertex> getVertices();
    bool getIsRoad();
    int getPlayer();
    void setIsRoad(bool isRoad);
    void setPlayer(int player);
    ~Edge();
};


#endif //EDGE_H
