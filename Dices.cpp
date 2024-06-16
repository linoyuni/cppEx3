//
// Created by Linoy Oren Croitoru on 05/06/2024.
//

#include "Dices.hpp"

Dices::Dices() {
    this->dice1 = 0;
    this->dice2 = 0;
}

int Dices::roll() {
    this->dice1 = rand() % 6 + 1;
    this->dice2 = rand() % 6 + 1;
    return this->dice1 + this->dice2;
}