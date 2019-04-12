#ifndef LAND_H
#define LAND_H

#include <iostream>
#include <sstream>

using namespace std;

enum LandType{FOREST, HILLS, FIELD, PASTURE, MOUNTAIN};

// The base class for all tiles
class Tile{
    protected:
    // describes the tile's land type
    LandType land;
    // describes the tile's number
    int number;
    
    public:
    // Mutators and Accessors
    void setLand(LandType);
    void setNumber(int);
    LandType getLand();
    int getNumber();
    
    // virtual function to render the tile's image in the terminal
    virtual string render(int); 
};

class EmptyTile : public Tile{
    public:
    EmptyTile(LandType, int);
    string render(int);
};

class SettledTile : public Tile{
    public:
    // Need to add parameter to pass in which player established settlement
    SettledTile(LandType, int);
    // Need to add rendering for player settlement
    string render(int);
};

#endif