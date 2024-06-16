//
// Created by Linoy Oren Croitoru on 05/06/2024.
//

#ifndef PLAYER_H
#define PLAYER_H


class Player {
private:
    int playerID;
    std::string color;
    std::vector<DevelopmentCard> developmentCards;
    int victoryPoints;
    int bricks;
    int wool;
    int ore;
    int grain;
    int lumber;
    int knights;
    int roads;
    int settlements;
    int cities;
    bool longestRoad;
    bool largestArmy;
public:
    Player(int playerID, std::string color);
    int getPlayerID();
    std::string getColor();
    int getVictoryPoints();
    int getBricks();
    int getWool();
    int getOre();
    int getGrain();
    int getLumber();
    int getKnights();
    int getRoads();
    int getSettlements();
    int getCities();
    bool getLongestRoad();
    bool getLargestArmy();
    void setVictoryPoints(int victoryPoints);
    void addVictoryPoints(int n);
    void addVictoryPoint();
    void setBricks(int bricks);
    void addBricks(int n);
    void setWool(int wool);
    void addWool(int n);
    void setOre(int ore);
    void addOre(int n);
    void setGrain(int grain);
    void addGrain(int n);
    void setLumber(int lumber);
    void addLumber(int n);
    void setKnights(int knights);
    void addKnight();
    void setRoads(int roads);
    void addRoad();
    void setSettlements(int settlements);
    void addSettlement();
    void setCities(int cities);
    void addCity();
    void setLongestRoad(bool longestRoad);
    void setLargestArmy(bool largestArmy);
    std::vector<DevelopmentCard> getDevelopmentCards();
    void addDevelopmentCard(DevelopmentCard dc);
    ~Player();
};


#endif //PLAYER_H
