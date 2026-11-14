#pragma once
#include <vector>
#include <string>
#include "Gate.h"
#include <iostream>
#include <set>

class Grid
{
protected:
std::vector<Gate> m_grid; //Stores a vector of all the gates in the grid
int m_width; //height of grid
int m_height; //width of grid

public:
Grid(int width, int height); //initializes grid as having width*height gates in a vector. Initializes m_width and m_height as parameters. Also links the gates together with neighboring gates in an obvious manner. for example each gate has their m_right linked to the m_left of the gate to their right
void printGrid(); //Does some for loop shenanigans to call rows of TextileUp, Textile, TextileUp, Textile, ... Textile, TextileDown, Break
int getHeight(); //more getters
int getWidth();
Gate& getGate(const int x, const int y); //Another getter. 
std::vector<Gate>& getGrid(); //useful for opening gates while outside the class.
int index( const int x, const int y) const;  //Super useful so I don't have to type the same math over and over
bool indexValid( const int x, const int y) const; //Way less useful than I thought it would be.
};

