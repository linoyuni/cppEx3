//
// Created by Linoy Oren Croitoru on 05/06/2024.
//

#include "Square.hpp"


Square::Square(std::vector<Vertex> vertices, std::vector<Edge> edges, std::string element, int num) {
    this->vertices = vertices;
    this->edges = edges;
    this->element = element;
    this->num = num;
}

std::vector<Vertex> Square::getVertices() {
    return this->vertices;
}

std::vector<Edge> Square::getEdges() {
    return this->edges;
}

std::string Square::getElement() {
    return this->element;
}

int Square::getNum() {
    return this->num;
}

void Square::setVertices(std::vector<Vertex> vertices) {
    this->vertices = vertices;
}

void Square::setEdges(std::vector<Edge> edges) {
    this->edges = edges;
}

void Square::setElement(std::string element) {
    this->element = element;
}

void Square::setNum(int num) {
    this->num = num;
}

Square::~Square() {
    // Destructor implementation, if needed
}
