#pragma once
#include <vector>
#include <string>
#include "Gate.h"
#include <iostream>
#include <set>

class Grid
{
protected:
std::vector<Gate> m_grid;
int m_width;
int m_height;
std::set<int> m_walls;


public:
Grid(int width, int height);
void printGrid();
int getHeight();
int getWidth();
Gate& getGate(const int x, const int y);
std::vector<Gate>& getGrid();
int index( const int x, const int y) const;
bool indexValid( const int x, const int y) const;
void createRandMaze();
};

