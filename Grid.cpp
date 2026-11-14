#include "Grid.h"
#include <algorithm>
#include <memory>
#include <cmath>
#include <iostream>
#include <ctime>
Grid::Grid(int width, int height)
{
m_height = height;
m_width = width;
m_grid.resize(height*width);

for(int i = 0; i<height; i++)
for(int j = 0; j<width; j++)
{
{	
	if(indexValid(j+1,i))
	{
		m_grid[index(j+1,i)].setLeft(m_grid[index(j,i)].getRight());
	}
	if(indexValid(j,i-1))
	{
		m_grid[index(j,i-1)].setDown(m_grid[index(j,i)].getUp());
	}
}
}
}



std::vector<Gate>& Grid::getGrid()
{
return m_grid;
}


void Grid::printGrid()
{
std::string maze= "";
for(int i = 0; i<=m_height; i++)
{
for(int n = 0; n<2;n++)
{
for(int j = 0; j<m_width; j++)
{


if(i==m_height && n==1){break;}
if(n==0 && i==m_height)
{
getGate(j,i-1).textileDown(maze);
}
else if(n==0)
{
getGate(j,i).textileUp(maze);
}
else
{
getGate(j,i).textile(maze);
}

}
std::cout << maze;
if(!(n==0 && i==m_height))
{;
std::cout << std::endl;
}
maze = "";
}
}
}


int Grid::getHeight()
{
return m_height;
}
int Grid::getWidth()
{
return m_width;
}

bool Grid::indexValid( const int x, const int y) const
{
if(x < 0 || x >= m_width)
{
	return false;
}
if(y < 0 || y >= m_height)
{
	return false;
}
return true;
}

Gate& Grid::getGate(const int x, const int y)
{
return m_grid[m_width*y+x];
}

int Grid::index( const int x, const int y) const
{
return m_width*y+x;
}

