#pragma once
#include <vector>
#include <string>
#include "Gate.h"
#include <iostream>
class Grid
{
protected:
std::vector<Gate> m_grid;
int m_width;
int m_height;


public:
Grid(int width, int height);
void printGrid();
int getHeight();
int getWidth();
Gate& getGate(const int x, const int y);
std::vector<Gate>& getGrid();
int index( const int x, const int y) const;
bool indexValid( const int x, const int y) const;
};

