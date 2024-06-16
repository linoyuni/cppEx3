//
// Created by Linoy Oren Croitoru on 05/06/2024.
//

#ifndef DEVELOPMENTCARD_H
#define DEVELOPMENTCARD_H


class DevelopmentCard {
private:
    std::string type;
    int longestRoad;
    int largestArmy;
    int knights;
    int victoryPoints;
    int monopoly;
    int yearOfPlenty;
    int roadBuilding;
public:
    DevelopmentCard(std::string type);
    std::string getType();
    int getLongestRoad();
    int getLargestArmy();
    int getKnights();
    int getVictoryPoints();
    int getMonopoly();
    int getYearOfPlenty();
    int getRoadBuilding();
    void setLongestRoad(int longestRoad);
    void setLargestArmy(int largestArmy);
    void setKnights(int knights);
    void decreaseKnights();
    void setVictoryPoints(int victoryPoints);
    void decreaseVictoryPoints();
    void setMonopoly(int monopoly);
    void decreaseMonopoly();
    void setYearOfPlenty(int yearOfPlenty);
    void decreaseYearOfPlenty();
    void setRoadBuilding(int roadBuilding);
    void decreaseRoadBuilding();
    ~DevelopmentCard();

};


#endif //DEVELOPMENTCARD_H
