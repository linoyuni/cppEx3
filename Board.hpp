//
// Created by Linoy Oren Croitoru on 05/06/2024.
//

#ifndef BOARD_H
#define BOARD_H


class Board {
private:
    std::vector<std::vector<Square>> squares;
public:
    Board();
    Board(std::vector<std::vector<Square>> squares);
    std::vector<std::vector<Square>> getSquares();
    void setSquares(std::vector<std::vector<Square>> squares);
    ~Board();
};


#endif //BOARD_H
