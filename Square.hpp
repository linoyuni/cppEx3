//
// Created by Linoy Oren Croitoru on 05/06/2024.
//

#ifndef SQUARE_H
#define SQUARE_H
#include <iostream>



class Square {
private:
    std::vector<Vertex> vertices;
    std::vector<Edge> edges;
    std::string element;
    int num;
public:
    Square(std::vector<Vertex> vertices, std::vector<Edge> edges, string element, int num);
    std::vector<Vertex> getVertices();
    std::vector<Edge> getEdges();
    string getElement();
    int getNum();
    void setVertices(std::vector<Vertex> vertices);
    void setEdges(std::vector<Edge> edges);
    void setElement(string element);
    void setNum(int num);
    ~Square();

};


#endif //SQUARE_H
