//
// Created by Linoy Oren Croitoru on 05/06/2024.
//

#ifndef VERTEX_H
#define VERTEX_H
#include <string>


class Vertex {
private:
    int x;
    int y;
    bool isOccupied;
    int player;
    string type;
public:
    Vertex(int x, int y);
    Vertex(int x, int y, bool isOccupied, int player, string type);
    int getX();
    int getY();
    bool getIsOccupied();
    int getPlayer();
    std::string getType();
    void setX(int x);
    void setY(int y);
    void setIsOccupied(bool isOccupied);
    void setPlayer(int player);
    void setType(string type);
    ~Vertex();
};


#endif //VERTEX_H
