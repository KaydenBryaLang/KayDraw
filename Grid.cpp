#include "Grid.h"
#include <algorithm>
#include <memory>
#include <cmath>
#include <iostream>
Grid::Grid(int width, int height)
{
m_height = height;
m_width = width;
m_grid.resize(height*width);

for (int i = 1; i <= ((height-1)*width+(width-1)*height+width-1); ++i) 
{
        m_walls.emplace_hint(m_walls.end(), i);
}

for(int i = 0; i<height; i++)
for(int j = 0; j<width; j++)
{
{	
	m_grid[index(j,i)].setGroup(index(j,i));
	if(indexValid(j+1,i))
	{
		//getGate(j-1,i).m_up =  getGate(j-1,i).m_up;
		m_grid[index(j+1,i)].setLeft(m_grid[index(j,i)].getRight());
	}
	if(indexValid(j,i-1))
	{
		//getGate(j,i).m_right = getGate(j,i).m_right;
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
return;
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




void Grid::createRandMaze()
{
int sel;

while(m_walls.size() != 0)
{
auto it = m_walls.begin();
sel = rand() % (m_walls.size());
std::advance(it,sel);

if(*it<=(m_height-1)*m_width)
{

	int ind1 = *it - 1;
	int x1 = ind1 % m_width;
	int y1 = (ind1 - x1)/m_width;
	ind1 = index(x1,y1);
	int ind2 = index(x1,y1+1);
	//int ind2 = *it + m_width - 1;
	
	if(m_grid[ind1].getGroup() != m_grid[ind2].getGroup())
	{
	m_grid[ind1].openDown(true);
	if(m_grid[ind1].valence > m_grid[ind2].valence)
	{
	m_grid[ind2].setGroup(m_grid[ind1].getGroup());
	}
	else
	{
	m_grid[ind1].setGroup(m_grid[ind2].getGroup());
	}
	}
}
else
{	
	int ind1 = *it - ((m_height-1)*m_width)-1;
	int x1 = ind1 % (m_width - 1);
	int y1 = (ind1 - x1)/m_width;
	ind1 = index(x1,y1);
	//int ind1 = *it -  ((m_height-1)*m_width)-3  + floor(((*it-1)/(m_width-1)));
	int ind2 = ind1 + 1;
	
	if(m_grid[ind1].getGroup() != m_grid[ind2].getGroup())
	{
	m_grid[ind1].openRight(true);

	if(m_grid[ind1].valence > m_grid[ind2].valence)
	{ 
	m_grid[ind2].setGroupPtr(m_grid[ind1].getGroupPtr());

	}
	else
	{
	m_grid[ind1].setGroupPtr(m_grid[ind2].getGroupPtr());
	}

	}

}
m_walls.erase(*it);



}
}
