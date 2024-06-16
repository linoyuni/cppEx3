//
// Created by Linoy Oren Croitoru on 05/06/2024.
//

#include "Board.hpp"

Board::Board() {
    this->squares = NULL;
}

Board::Board(std::vector<std::vector<Square>> squares) {
    this->squares = squares;
}

std::vector<std::vector<Square>> Board::getSquares() {
    return this->squares;
}

void Board::setSquares(std::vector<std::vector<Square>> squares) {
    this->squares = squares;
}

Board::~Board() {
    // Destructor implementation, if needed
}